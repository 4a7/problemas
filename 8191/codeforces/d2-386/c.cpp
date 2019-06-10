#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int x1, x2, s;
int t1, t2;
int p, d;
int main(){
	cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
	cin>>s>>x1>>x2;
	cin>>t1>>t2;
	cin>>p>>d;
	int mini=abs(x1-x2)*t2;
	bool igor=false;
	int metros=0;
	while(true){
		if(p==x1){
			igor=true;
		}
		if(p==x2 && igor){
			break;
		}
		p+=d;
		metros++;
		if(p==0|| p==s)d*=-1;
	}
	mini=min(mini, metros*t1);
	cout<<mini<<endl;
	
	return 0;
}
