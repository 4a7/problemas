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
int x, y;
vector<int>enx;
vector<int>eny;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>x>>y;
    int inicio1=y;
    int inicio2=0;
     while(true){
        eny.pb(inicio1);
        enx.pb(inicio2);
        inicio1--;
        inicio2++;
        if(inicio1<0)break;
        if(inicio2>x)break;
     }
     cout<<enx.size()<<endl;
     for(int i=0;i<enx.size();i++){
        cout<<enx[i]<<" "<<eny[i]<<endl;
     }
    return 0;
}
