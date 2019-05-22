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
int largo;
string s;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>casos;
    bool posible;
    while(casos--){
        cin>>largo;
        cin>>s;
        posible=false;
        int cont=0;
        for(int j=s.size()-1;j>=0;j--){
            char i=s[j];
            if(i=='8' && cont>=10)posible=true;
            cont++;
        }
        if(posible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
