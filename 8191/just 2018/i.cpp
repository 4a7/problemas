#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<pair<int, pair<int, int>>> elementos;
int casos, n,x, y;
int main(){
    cin.tie(0);
	cout.tie(0);	
	std::ios::sync_with_stdio(false);	
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin >> a >> b >> c >> d;
        
        if(a+c > b+d){
            cout << 1 << endl;
            continue;
        }else if(b+d > a+c){
            cout << 2 << endl;
            continue;
        }
        
        if(b > c){
            cout << 2 << endl;
        }else if(c > b){
            cout << 1 << endl;
        }else{
            cout << -1 << endl;
        }
    
    }
    
}
