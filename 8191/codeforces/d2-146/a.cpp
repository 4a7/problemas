#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
string tira;
int abece[30];
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>tira;
    for(auto i:tira){
        abece[i-'a']++;
    }
    int dis=0;
    for(int i=0;i<27;i++){
        if(abece[i]>0)dis++;    
    }
    cout<<((dis%2==1)?"IGNORE HIM!":"CHAT WITH HER!")<<endl;
    return 0;
}
