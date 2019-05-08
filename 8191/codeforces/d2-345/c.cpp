#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int parejas;
map<int, int>x;
map<int, int>y;
map<pair<int, int>, int>xy;
vector<pair<int, int>>coords;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>parejas;
    while(parejas--){
        int px, py;
        cin>>px>>py;
        x[px]++;
        y[py]++;
        xy[{px, py}]++;
        coords.push_back({px, py});
    }
    ll tot=0;
    for(auto i:coords){
        ll temp=0;
        temp+=x[i.first];
        temp+=y[i.second];
        temp-=(2+xy[{i.first, i.second}]-1);
        //cout<<x[i.first]<<" "<<y[i.second]<<" "<<xy[{i.first, i.second}]<<endl;
        tot+=temp;
    }
    tot=tot/2;
    cout<<tot<<endl;
    return 0;
}
