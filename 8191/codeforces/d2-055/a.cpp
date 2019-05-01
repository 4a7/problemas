#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
string tira;
int mayus, minusc;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    mayus=minusc=0;
    cin>>tira;
    for(auto i:tira){
        if(i>='a')minusc++;
        else mayus++;
    }
    string tira2;
    for(int i=0;i<tira.size();i++){
        if(mayus>minusc){
            if(tira[i]>'Z')tira2.push_back(tira[i]-('a'-'A'));
            else tira2.push_back(tira[i]);
        }
        else{
            if(tira[i]<'a')tira2.push_back(tira[i]+('a'-'A'));
            else tira2.push_back(tira[i]);
        }
        //cout<<tira[i]<<endl;
    }
    cout<<tira2<<endl;
    return 0;
}
