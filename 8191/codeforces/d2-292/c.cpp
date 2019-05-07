#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int digitos;
vector<string>resultado;
string numero;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>digitos;
    cin>>numero;
    for(int i=0;i<digitos;i++){
        if(numero[i]=='8')resultado.pb("7"), resultado.pb("2"), resultado.pb("2"), resultado.pb("2");
        else if(numero[i]=='6')resultado.pb("5"), resultado.pb("3");
        else if(numero[i]=='4')resultado.pb("3"), resultado.pb("2"), resultado.pb("2");
        else if(numero[i]=='1' || numero[i]=='0') int j=1;
        else if(numero[i]=='9'){
            resultado.pb("3");
            resultado.pb("3");
            resultado.pb("7");
            resultado.pb("2");
        }
        else{
            string t;
            t.pb(numero[i]);
            resultado.pb(t);
        }
    }
    sort(resultado.begin(), resultado.end());
    reverse(resultado.begin(), resultado.end());
    string s="";
    for(auto i:resultado)s=s+i;
    cout<<s<<endl;
    return 0;
}
