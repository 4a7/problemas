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
ll a, b, c;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>a>>b>>c;
    ll resp=0;
    resp+=(c+c);
    if(a>b){
        resp+=(b+b+1);
    }
    else if(b>a){
        resp+=(a+a+1);
    }
    else if(a==b){
        resp+=(a+a);
    }
    cout<<resp<<endl;
    return 0;
}
