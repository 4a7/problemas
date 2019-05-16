#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
#define POPCOUNT __builtin_popcount
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int estudiantes, d;
ll num;
vector<int>notas;
ll dp[3000000];
ll contar(ll num){
    if(POPCOUNT(num)==estudiantes)return 1;
    if(dp[num]==-1){
        int inicio;
        for(inicio=0;inicio<estudiantes;inicio++){
            if(!(num&(1<<inicio)))break;
        }
        ll resp=0;
        for(int j=inicio+1;j<estudiantes;j++){
            if(num&(1<<j))continue;
            for(int k=j+1;k<estudiantes;k++){
                if(num&(1<<k))continue;
                int maxi=max(notas[inicio], max(notas[j], notas[k]));
                int mini=min(notas[inicio], min(notas[j], notas[k]));
                if(abs(maxi-mini)<=d){
                    resp+=contar(num|(1<<inicio)|(1<<j)|(1<<k));
                }
            }
        }
        dp[num]=resp;
    }
    return dp[num];
    
}
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    while(cin>>estudiantes>>d){
        if(estudiantes==0 && d==0)break;
        notas.clear();
        memset(dp, -1, sizeof dp);
        for(int i=0;i<estudiantes;i++){
            int temp;
            cin>>temp;
            notas.push_back(temp);
        }
        ll resp = contar(0);
        cout<<resp<<endl;
    }
    return 0;
}
