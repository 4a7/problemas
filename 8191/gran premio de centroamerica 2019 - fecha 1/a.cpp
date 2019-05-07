#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
#define pb push_back
#define MAXN 1000100
#define operacion(x, y) x+y
#define forr(i, a, b) for(int i=(a); i<(b); i++)
#define forn(i, n) forr(i, 0, n)
#define dforn(i, n) for(int i=n-1; i>=0; i--)
const int neutro=0;
struct RMQ{
    int sz;
    ll t[4*MAXN];
    ll &operator[](int p){return t[sz+p];}
    void init(int n){
        sz=1<<(32-__builtin_clz(n));
        forn(i, 2*sz)t[i]=neutro;
    }
    void updall(){
        dforn(i, sz)t[i]=operacion(t[2*i], t[2*i+1]);}
    ll get(int i, int j){
        return get(i, j, 1, 0, sz); 
    }
    ll get(int i, int j, int n, int a, int b){
        if(j<=a || i>=b)return neutro;
        if(i<=a && b<=j) return t[n];
        int c=(a+b)/2;
        return operacion(get(i, j, 2*n, a, c), get(i, j, 2*n+1, c, b));
    }
    void set(int p, ll val){
        for(p+=sz; p>0 && t[p]!=val;){
            t[p]=val;
            p/=2;
            val=operacion(t[p*2], t[p*2+1]);
        }
    }

}rmq;

struct RMQ2{
    int sz;
    ll t[4*MAXN];
    ll &operator[](int p){return t[sz+p];}
    void init(int n){
        sz=1<<(32-__builtin_clz(n));
        forn(i, 2*sz)t[i]=neutro;
    }
    void updall(){
        dforn(i, sz)t[i]=operacion(t[2*i], t[2*i+1]);}
    ll get(int i, int j){
        return get(i, j, 1, 0, sz); 
    }
    ll get(int i, int j, int n, int a, int b){
        if(j<=a || i>=b)return neutro;
        if(i<=a && b<=j) return t[n];
        int c=(a+b)/2;
        return operacion(get(i, j, 2*n, a, c), get(i, j, 2*n+1, c, b));
    }
    void set(int p, ll val){
        for(p+=sz; p>0 && t[p]!=val;){
            t[p]=val;
            p/=2;
            val=operacion(t[p*2], t[p*2+1]);
        }
    }

}rmq2;


ll sumas[1000100];
ll sumas2[1000100];
int cantidad;
vector<ll>elementos;
int main(){
    ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
	cin>>cantidad;
	rmq.init(cantidad+10);
	rmq2.init(cantidad+10);
	int j=0;
	while(cantidad--){
	    ll temp;
	    cin>>temp;
	    elementos.pb(temp);
	    rmq[j]=0;
	    rmq2[j]=0;
	    j++;
	}
	rmq.updall();
	rmq2.updall();
	ll sumatot=0;
	for(int i=elementos.size()-1;i>=0;i--){
	    rmq.set(elementos[i], sumas[elementos[i]]+elementos[i]);
	    rmq2.set(elementos[i], sumas2[elementos[i]]+1);
	    sumas[elementos[i]]+=elementos[i];
	    sumas2[elementos[i]]++;
	    ll a=rmq.get(0, elementos[i]-1);
	    a+=rmq.get(elementos[i]+2, 1000100); 
	    ll a2=rmq2.get(0, elementos[i]-1);
	    a2+=rmq2.get(elementos[i]+2, 1000100); 
	    //cout<<a<<" "<<(a2*elementos[i])<<endl;
	    if(a2>0){
	        sumatot+=(a-(a2*elementos[i]));
	    }
	    
	}
	cout<<sumatot<<endl;
	return 0;
}

