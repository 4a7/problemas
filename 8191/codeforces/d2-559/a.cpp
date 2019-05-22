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
string s;
int cantidad=0;
int mas=0;
int menos=0;
int r=0;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>cantidad;
    cin>>s;
    for(auto i:s){
        if(i=='+'){
            r++;
            
        }
        else{
            if(r>0)r--;
        }
        
    }
    cout<<r<<endl;
    return 0;
}
