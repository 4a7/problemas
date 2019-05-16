#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define pb push_back
typedef long long ll;
string s;
int main(){
    ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
	ll unosantes=0;
	ll total=0;
	cin>>s;
	for(auto i:s){
	    int num=i-'0';
	    if(num==1){
	        unosantes++;
	        total+=unosantes;
	    }
	    
	}
	cout<<total<<endl;
	return 0;
}

