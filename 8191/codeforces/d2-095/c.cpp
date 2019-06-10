#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
ll n, m, t;
typedef pair<int, int> ii;
ll dp[70][70][32][32];

ll contar(ll ti, ll pi, ll nx, ll mx){
	//cout<<ti<<" "<<pi<<" "<<nx<<" "<<mx<<endl;
	if(ti==t && nx>=4 && mx>=1)return 1;
	if(pi>=(n+m))return 0;
	
	if(dp[ti][pi][nx][mx]==-1){
		ll cont=0;
		ll esh, esm;
		esh=esm=0;
		if(pi<n)esh=1;
		else esm=1;
		cont+=contar(ti+1, pi+1, nx+esh, mx+esm);
		cont+=contar(ti, pi+1, nx, mx);
		dp[ti][pi][nx][mx]=cont;
	}
	return dp[ti][pi][nx][mx];
}
int main(){
	cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
	cin>>n>>m>>t;
	memset(dp, -1, sizeof dp);
	cout<<contar(0, 0, 0, 0)<<endl;
	
	return 0;
}
