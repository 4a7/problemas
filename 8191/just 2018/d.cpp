#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
#define pb push_back
#define PI 2*acos(0.0)
#define show(x) cout<< #x <<" is "<< x <<"\n"
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int n, m, k;
int dp[33000];
vector<pair<int, int>>g[16];
int espec;

int contar(int m){
    if((m&espec)==espec){
        return 0;
    }
    if(dp[m]==-1){
        int ret=1e9;
        if(m==0){
            for(int i=0;i<n;i++){
                ret=min(ret, contar(1<<i));
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(m&(1<<i)){
                    for(int j=0;j<g[i].size();j++){
                        if(!(m&(1<<g[i][j].first))){
                            ret=min(ret, g[i][j].second+contar(m|(1<<g[i][j].first)));
                        }
                    }
                }
            }
        }
        dp[m]=ret;
    }
    return dp[m];
}
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>casos;
    while(casos--){

        memset(dp, -1, sizeof dp);
        cin>>n>>m>>k;
        for(int i=0;i<n;i++)g[i].clear();
        
        for(int i=0;i<m;i++){
            int u, v, c;
            cin>>u>>v>>c;
            u--;
            v--;
            g[u].pb({v, c});
            g[v].pb({u, c});
            
        }
        espec=0;
        for(int i=0;i<k;i++){
            int j;
            cin>>j;
            j--;
            espec|=(1<<j);
        }
        cout<<contar(0)<<endl;
        
    }
    return 0;
}
