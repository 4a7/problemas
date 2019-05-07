#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int piedras;
vector<ll>tipo1;
vector<ll>tipo2;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>piedras;
    tipo1.push_back(0);
    tipo2.push_back(0);
    for(int i=0;i<piedras;i++){
        ll temp;
        cin>>temp;
        tipo1.push_back(temp);
        tipo2.push_back(temp);
    }
    sort(tipo2.begin(), tipo2.end());
    ll acum1, acum2;
    acum1=acum2=0;
    for(int i=1;i<=piedras;i++){
        tipo1[i]=acum1+tipo1[i];
        acum1=tipo1[i];
        
        tipo2[i]=acum2+tipo2[i];
        acum2=tipo2[i];
        //cout<<acum1<<" "<<acum2<<endl;
    }
    int preguntas;
    int tipo, l, r;
    cin>>preguntas;
    while(preguntas--){
        cin>>tipo>>l>>r;
        if(tipo==1)
            cout<<tipo1[r]-tipo1[l-1]<<endl;
        else
            cout<<tipo2[r]-tipo2[l-1]<<endl;
    }
    return 0;
}
