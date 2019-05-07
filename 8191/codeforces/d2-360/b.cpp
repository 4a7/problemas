#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
string s;

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>s;
    for(int i=s.size()-1;i>=0;i--){
        s.push_back(s[i]);
    }
    cout<<s<<endl;
    return 0;
}
