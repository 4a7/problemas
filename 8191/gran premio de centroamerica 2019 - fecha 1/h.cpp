#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define pb push_back
typedef long long ll;
ll problemas, tolerancia;
vector<ll>magnitud;
int main(){
    ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
	cin>>problemas>>tolerancia;
	for(int i=0;i<problemas;i++){
        ll temp;
        cin>>temp;
        magnitud.pb(temp);
	}
	sort(magnitud.begin(), magnitud.end());
	ll tipo1=0;
	ll tipo2=0;
	ll acum=0;
	
	for(auto i:magnitud){
	    if(acum+i<tolerancia){
	        acum+=i;
	        tipo2++;
	    }
	}
	acum=0;
	for(int i=magnitud.size()-1;i>=0;i--){
	    if(acum+magnitud[i]<tolerancia){
	        acum+=magnitud[i];
	        tipo1++;
	    }
	}
	cout<<tipo1<<" "<<tipo2<<endl;
	return 0;
}

