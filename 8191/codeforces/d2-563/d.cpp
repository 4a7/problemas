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
int n, x;
vector<int>b;
bool hay[1<<18];
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>n>>x;
    b.pb(0);
    hay[0]=true;
    for(int i=1;i<(1<<n);i++){
        if(hay[i^x])continue;
        hay[i]=true;
        b.pb(i);
    }
    cout<<b.size()-1<<endl;
    for(int i=1;i<b.size();i++){
        if(i!=1)cout<<" ";
        cout<<(b[i]^b[i-1]);
    }
    if(b.size()>1)cout<<endl;
    return 0;
}
