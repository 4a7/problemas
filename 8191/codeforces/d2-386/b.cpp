#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int largo;
string tira;
string res="";

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>largo;
    cin>>tira;
    for(int i=0;i<tira.size();i++){
        if(largo%2==0){
            string a="";
            a.pb(tira[i]);
            res=a+res;
        }
        else{
            res.pb(tira[i]);
        }
        largo--;
    }
    cout<<res<<endl;
    
    return 0;
}
