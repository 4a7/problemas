#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
ll n, m;
vector<pair<ll, ll>>cajas;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        ll a, b;
        cin>>a>>b;
        cajas.push_back({b, a});
    }
    sort(cajas.begin(), cajas.end());
    ll fina=0;
    for(int i=m-1;i>=0;i--){
        ll quitar=min(n, cajas[i].second);
        fina+=(quitar*cajas[i].first);
        n-=quitar;
        if(n<=0)break;
    }
    cout<<fina<<endl;
    return 0;
}
