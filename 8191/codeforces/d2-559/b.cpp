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
int cantidad;
vector<pair<int, int>>elems;

bool evaluar(ll k){
    if(k==0)return true;
    for(auto i:elems){
        if(k*abs(i.second-1)>i.first || k*abs(i.second-cantidad)>i.first){
            return false;
        }
    }
    return true;
}
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>cantidad;
    for(int i=1;i<=cantidad;i++){
        int temp;
        cin>>temp;
        elems.pb({temp, i});
    }
    sort(elems.begin(), elems.end());
    
    ll inicio=0;
    ll fin = 1e10;
    ll medio;
    ll resp;
    for(int i=0;i<200;i++){
        medio=inicio+(fin-inicio)/2;
        if(evaluar(medio)){
            inicio=medio+1;
            resp=medio;
        }
        else{
            fin=medio;
        }
    }
    cout<<resp<<endl;
    return 0;
}
