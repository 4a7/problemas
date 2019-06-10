#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
ll a, b;
ll mina, minb;
ll gcd(ll a, ll b){return a?gcd(b %a, a):b;}
int main(){
	cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
	cin>>a>>b;
	ll fin=(a*b)/gcd(a, b);
	mina=minb=0;
	ll multaini=0;
	ll multbini=0;
	ll minprev=0;
	ll minact=0;
	ll temp;
	while(multaini<fin){
		temp=minact;
		if(multaini+a<multbini+b){
			multaini+=a;
			minact=multaini;
			mina+=(minact-temp);
		}
		else if(multbini+b<multaini+a){
			multbini+=b;
			minact=multbini;
			minb+=(minact-temp);
		}
		else{
			multaini+=a;
			multbini+=b;
			
			minact=multbini;
			if(a>b)mina+=(minact-temp);
			else minb+=(minact-temp);
		}
		minprev=temp;
		//cout<<minact<<" "<<minprev<<" "<<mina<<" "<<minb<<endl; 
		
	}
	//cout<<mina<<" "<<minb<<endl;
	if(mina>minb)cout<<"Dasha"<<endl;
	else if(minb>mina)cout<<"Masha"<<endl;
	else cout<<"Equal"<<endl;
	
	return 0;
}
