#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int cant;
int temp;
map<int, ll>mapa;
int preguntas;

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>cant;
    ll cont=1;
    ll inicio, fin;
    inicio=fin=0;
    for(int i=0;i<cant;i++){
        cin>>temp;
        mapa[temp]=cont;
        cont++;
    }
    cin>>preguntas;
    for(int i=0;i<preguntas;i++){
        cin>>temp;
        ll pos=mapa[temp];
        inicio+=pos;
        fin+=(cant+1-pos);
    }
    cout<<inicio<<" "<<fin<<endl;
    return 0;
}
