#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int problemas;
int a, b, c;
int resueltos;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    resueltos=0;
    cin>>problemas;
    while(problemas--){
        cin>>a>>b>>c;
        if(a+b+c>=2)resueltos++;
    }
    cout<<resueltos<<endl;
    return 0;
}
