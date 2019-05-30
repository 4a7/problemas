#include<bits/stdc++.h>
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

struct UnionFind{
    vector<int> f;//the array contains the parent of each node
    void init(int n){f.clear(); f.insert(f.begin(), n, -1);}
    int comp(int x){return (f[x]==-1?x:f[x]=comp(f[x]));}//O(1)
    bool join(int i, int j) {
        bool con=comp(i)==comp(j);
        if(!con) f[comp(i)] = comp(j);
        return con;
    }
}uf;

struct Ar{int a,b,w;};
bool operator<(const Ar& a, const Ar &b){return a.w<b.w;}
vector<Ar> E;
ll kruskal(){
    ll cost=0;
    sort(E.begin(), E.end());//ordenar aristas de menor a mayor
    
    forall(it, E){
        if(uf.comp(it->a)!=uf.comp(it->b)){//si no estan conectados
            uf.join(it->a, it->b);//conectar
            cost+=it->w;
        }
    }
    return cost;
}
int personas, lenguajes;
map<int, int>lenguajesexistentes;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>personas>>lenguajes;
    uf.init(10000);
    int agregados=0;
    for(int i=1;i<=personas;i++){
        int cant;
        cin>>cant;
        while(cant--){
            int temp;
            cin>>temp;
            agregados++;
            lenguajesexistentes[temp]=1;
            uf.join(i, 1000+temp);
        }
    }
    if(agregados==0)lenguajesexistentes[1]=1;
    for(int i=1;i<=personas;i++){
        for(int j=1;j<=lenguajes;j++){
            if(lenguajesexistentes[j]==1){
                if(uf.comp(i)!=uf.comp(1000+j)){
                    E.push_back({i, 1000+j, 1});
                }
            }
        }
    }
    int costo=kruskal();
    cout<<costo<<endl;
    
    return 0;

}
