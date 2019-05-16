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
int rojas, azules;
stack<int>r;
stack<int>b;

string s;
string res;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>largo;
    cin>>s;
    rojas=azules=0;
    for(auto i:s){
        if(i=='('){
            if(rojas<azules){
                rojas++;
                //r.push(0);
                res.pb('0');
            }
            else{
                azules++;
                //a.push(1);
                res.pb('1');
            }
        }
        else{
            if(rojas>azules){
                rojas--;
                res.pb('0');
            }
            else{
                azules--;
                res.pb('1');
            }
                
        }
    }
    cout<<res<<endl;
    return 0;
}
