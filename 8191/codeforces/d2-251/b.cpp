#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
ll n, x;
ll total;
vector<ll>tiempos;

int main(){
	cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
	cin>>n>>x;
	while(n--){
		ll temp;
		cin>>temp;
		tiempos.push_back(temp);
	}
	sort(tiempos.begin(), tiempos.end());
	total=0;
	ll e=1;
	for(auto i:tiempos){
		total+=(i*x);
		x--;
		x=max(x, e);
	}
	cout<<total<<endl;
	
	return 0;
}
