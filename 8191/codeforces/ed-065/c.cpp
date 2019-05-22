#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
#define pb push_back
#define PI 2*acos(0.0)
#define show(x) cout<< #x <<" is "<< x <<"\n"
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int personas, grupos;
int cant, temp;

struct UnionFind{
    vector<int> f;//the array contains the parent of each node
    void init(int n){f.clear(); f.insert(f.begin(), n, -1);}
    int comp(int x){return (f[x]==-1?x:f[x]=comp(f[x]));}//O(1)
    bool join(int i, int j) {
    bool con=comp(i)==comp(j);
    if(!con) f[comp(i)] = comp(j);
    return con;
}}uf;


int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>personas>>grupos;
    uf.init(personas+10);
    while(grupos--){
        cin>>cant;
        if(cant==0)continue;
        int base;
        cin>>base;
        cant--;
        while(cant>0){
            
            cin>>temp;
            uf.join(base, temp);
            cant--;
        }
    }
    map<int, int>mapa;
    for(int i=1;i<=personas;i++){
        mapa[uf.comp(i)]++;
    }
    for(int i=1;i<=personas;i++){
        if(i!=1)cout<<" ";
        cout<<mapa[uf.comp(i)];
    }
    cout<<endl;
    
    return 0;
}
