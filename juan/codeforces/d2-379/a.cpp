#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int largo;
string tira;
int anton, danik;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>largo;
    cin>>tira;
    anton=danik=0;
    for(auto i:tira){
        if(i=='A')anton++;
        else danik++;
    }
    if(anton==danik)cout<<"Friendship"<<endl;
    else if(anton>danik)cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;
    return 0;
}
