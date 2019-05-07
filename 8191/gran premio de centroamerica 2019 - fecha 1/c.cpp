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
#define forall(it, v) for(auto it=v.begin(); it!=v.end();++it)
struct UnionFind{
    vector<int>f;
    void init(int n){
        f.clear();
        f.insert(f.begin(), n, -1);
        
    }
    int comp(int x){
        return (f[x]==-1?x:f[x]=comp(f[x]));
    }
    bool join(int i, int j){
        bool con=comp(i)==comp(j);
        if(!con){
            f[comp(i)]=comp(j);
            return con;
        }
    }

}uf;
ll nuevos;
struct Ar{int a, b, w;};
bool operator<(const Ar& a, const Ar &b ){return a.w<b.w;}
vector<Ar> E;
ll kruskal(){
    ll cost=0;
    sort(E.begin(), E.end());
    
    forall(it, E){
        if(uf.comp(it->a)!=uf.comp(it->b)){
            uf.join(it->a, it->b);
            cost+=it->w;
            nuevos++;
        }
    }
    return cost;
}
int casos;
int main(){
    ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
	cin>>casos;
	while(casos--){
	    int ciudades, calles;
	    cin>>ciudades>>calles;
	    uf.init(ciudades+10);
	    for(int i=0;i<calles;i++){
	        int a, b, c;
	        cin>>a>>b>>c;
	        uf.join(a, b);
	    }
	    E.clear();
	    cin>>calles;
	    while(calles--){
	        int a, b, c;
	        cin>>a>>b>>c;
	        E.push_back({a, b, c});
	    }
	    nuevos=0;
	    ll costo1=kruskal();
	    bool posible=true;
        for(int i=1;i<ciudades;i++){
            if(uf.comp(1)!=uf.comp(i))posible=false;
        }
        if(!posible){
            cout<<"You better hire someone else"<<endl;
        }
        else{
            if(nuevos==0){
                cout<<"Thank you, Goodbye"<<endl;
            }
            else{
                cout<<costo1<<endl;
            }
        }
	
	}
	return 0;
}

