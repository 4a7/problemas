#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
#define pb push_back
#define PI 2*acos(0.0)
#define show(x) cout<< #x <<" is "<< x <<"\n"
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int dp[100100][5][5];
int largo;
string tira;

int contar(int pos, int revs, int prev){
    if(dp[pos][revs][prev]==-1){
        int cont=0;
        int prev2;
        int actual=tira[pos]-'0';
        if(revs==1)actual=1-actual;
        if(pos>=largo)cont=0;
        else if(revs==2){
            cont=max((actual!=prev?1:0)+contar(pos+1, revs, actual), (actual==prev?1:0)+contar(pos+1, 1, 1-actual));
        }
        else if(revs==1){
            cont=max((actual!=prev?1:0)+contar(pos+1, 1, actual), (actual==prev?1:0)+contar(pos+1, 0, 1-actual));
        }
        else{
            cont=(actual!=prev?1:0)+contar(pos+1, revs, actual);
        }
        dp[pos][revs][prev]=cont;
        
    }
    return dp[pos][revs][prev];
}

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>largo;
    cin>>tira;
    memset(dp, -1, sizeof dp);
    cout<<contar(0, 2, 4)<<endl;
    return 0;
}
