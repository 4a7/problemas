#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)
#define MAXN 100100
#define operacion(x, y) x+y
const int neutro=0;
#define tipo int
struct RMQ{
	int sz;
	tipo t[4*MAXN];
	tipo &operator[](int p){return t[sz+p];}
	void init(int n){//O(nlgn)
		sz = 1 << (32-__builtin_clz(n));
		forn(i, 2*sz) t[i]=neutro;
	}
	void updall(){//O(n)
		dforn(i, sz) t[i]=operacion(t[2*i], t[2*i+1]);}
	tipo get(int i, int j){return get(i,j,1,0,sz);}
	tipo get(int i, int j, int n, int a, int b){//O(lgn)
		if(j<=a || i>=b) return neutro;
		if(i<=a && b<=j) return t[n];
		int c=(a+b)/2;
		return operacion(get(i, j, 2*n, a, c), get(i, j, 2*n+1, c, b));
	}
	void set(int p, tipo val){//O(lgn)
		for(p+=sz; p>0 && t[p]!=val;){
			t[p]=val;
			p/=2;
			val=operacion(t[p*2], t[p*2+1]);
		}
	}
}rmq;


int m, n;
vector<int>ordenados;
set<int>::iterator it;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    while(cin>>m>>n){
        rmq.init(m*n+10); 
        forn(i, n){
            rmq[i]=0; 
        }
        rmq.updall();
        ll cont=0;
        ll distancia=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                int temp;
                cin>>temp;
                if(temp==m*n){
                    distancia=(abs(m-i)+abs(n-j));
                }
                
                int cant=rmq.get(1, temp);
                rmq.set(temp, 1);
                //cout<<temp<<" "<<cant<<" "<<((temp-1)-cant)<<endl;
                cont+=((temp-1)-cant);
                
            }
        }
        cont+=distancia;
        //cout<<cont<<" "<<distancia<<endl;
        //cout<<cont<<endl;
        if(cont%2==0)cout<<"Y"<<endl;
        else cout<<"N"<<endl;
        
    }
    return 0;
}
