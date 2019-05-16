#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
string a, b;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>a>>b;
    int res=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>='a')a[i]=a[i]-('a'-'A');
        if(b[i]>='a')b[i]=b[i]-('a'-'A');
        //cout<<a[i]<<" "<<b[i]<<endl;
        if(a[i]<b[i]){res=-1;break;}
        else if(a[i]>b[i]){res=1; break;}
        
    }
    cout<<res<<endl;
    return 0;
}
