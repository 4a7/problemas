#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int largo, hueco;
vector<ll>alturas;

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>largo>>hueco;
    ll acum=0;
    alturas.push_back(0);
    for(int i=0;i<largo;i++){
        ll temp;
        cin>>temp;
        acum+=temp;
        
        alturas.push_back(acum);
        //cout<<alturas[i+1]<<endl;
    }
    ll minimo=1e18;
    int indice;
    for(int i=1;i+hueco-1<=largo;i++){
        
        if(alturas[i+hueco-1]-alturas[i-1]<minimo){
            minimo=alturas[i+hueco-1]-alturas[i-1];
            indice=i;
        }
        //cout<<minimo<<endl;
    }
    cout<<indice<<endl;
    return 0;
}
