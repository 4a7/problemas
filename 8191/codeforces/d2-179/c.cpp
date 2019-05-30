#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
#define pb push_back
#define PI 2*acos(0.0)
#define show(x) cout<< #x <<" is "<< x <<"\n"
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int n, m, k;
vector<int>opini;
vector<int>opfin;
vector<ll>valor;
vector<ll>arreglo;
//Dado un arreglo y una operacion asociativa con neutro, get(i, j) opera sobre el rango [i, j).
typedef ll Elem;//Elem de los elementos del arreglo
typedef ll Alt;//Elem de la alteracion
#define operacion(x,y) x+y
const Elem neutro=0; const Alt neutro2=0;
#define MAXN 100000
struct RMQ{
	int sz;
	Elem t[4*MAXN];
	Alt dirty[4*MAXN];//las alteraciones pueden ser de distinto Elem
	Elem &operator[](int p){return t[sz+p];}
	void init(int n){//O(nlgn)
		sz = 1 << (32-__builtin_clz(n));
		forn(i, 2*sz) t[i]=neutro;
		forn(i, 2*sz) dirty[i]=neutro2;
	}
	void push(int n, int a, int b){//propaga el dirty a sus hijos
		if(dirty[n]!=0){
			t[n]+=dirty[n]*(b-a);//altera el nodo 
			if(n<sz){
				dirty[2*n]+=dirty[n];
				dirty[2*n+1]+=dirty[n];
			}
			dirty[n]=0;
		}
	}
	Elem get(int i, int j, int n, int a, int b){//O(lgn)
		if(j<=a || i>=b) return neutro;
		push(n, a, b);//corrige el valor antes de usarlo
		if(i<=a && b<=j) return t[n];
		int c=(a+b)/2;
		return operacion(get(i, j, 2*n, a, c), get(i, j, 2*n+1, c, b));
	}
	Elem get(int i, int j){return get(i,j,1,0,sz);}
	//altera los valores en [i, j) con una alteracion de val
	void alterar(Alt val, int i, int j, int n, int a, int b){//O(lgn)
		push(n, a, b);
		if(j<=a || i>=b) return;
		if(i<=a && b<=j){
			dirty[n]+=val;
			push(n, a, b);
			return;
		}
		int c=(a+b)/2;
		alterar(val, i, j, 2*n, a, c), alterar(val, i, j, 2*n+1, c, b);
		t[n]=operacion(t[2*n], t[2*n+1]);//por esto es el push de arriba
	}
	void alterar(Alt val, int i, int j){alterar(val,i,j,1,0,sz);}
}rmq, rmq2;

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>n>>m>>k;
    rmq.init(100100);
    rmq2.init(100100);
    for(int i=0;i<n;i++){
        ll f;
        cin>>f;
        arreglo.pb(f);
    }
    for(int i=0;i<m;i++){
        int ini, fini;
        ll dini;
        cin>>ini>>fini>>dini;
        ini--;
        fini--;
        opini.pb(ini);
        opfin.pb(fini);
        valor.pb(dini);
    }
    for(int i=0;i<k;i++){
        int xi, yi;
        
        cin>>xi>>yi;
        xi--;
        yi--;
        rmq2.alterar(1, xi, yi+1);
    }
    for(int i=0;i<m;i++){
        int cant=rmq2.get(i, i+1);
        
        rmq.alterar(valor[i]*cant, opini[i], opfin[i]+1);
    }
    for(int i=0;i<n;i++){
        if(i!=0)cout<<" ";
        ll val=rmq.get(i, i+1);
        cout<<arreglo[i]+val;
    }
    cout<<endl;
    
    return 0;
}
