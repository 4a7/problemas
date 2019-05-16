#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
string s;

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>s;
    int cont=0;
    while(true){
        if(s.size()==1){
            break;
        }
        else{
            int nuevonum=0;
            for(auto i:s)nuevonum+=(i-'0');
            s = to_string(nuevonum);
            cont++;
        }
    }
    cout<<cont<<endl;
    return 0;
}
