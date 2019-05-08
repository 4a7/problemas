#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
#define dprint(v) cout << #v"=" << v << endl //;)
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fst first
#define snd second
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
#define MAXP 1000100 //no necesariamente primo
int criba[MAXP+1];
void crearcriba(){
    int w[] = {4,2,4,2,4,6,2,6};
    for(int p=25;p<=MAXP;p+=10) criba[p]=5;
    for(int p=9;p<=MAXP;p+=6) criba[p]=3;
    for(int p=4;p<=MAXP;p+=2) criba[p]=2;
    for(int p=7,cur=0;p*p<=MAXP;p+=w[cur++&7]) if (!criba[p])
    for(int j=p*p;j<=MAXP;j+=(p<<1)) if(!criba[j]) criba[j]=p;
}

vector<ll> primos;
void buscarprimos(){
    crearcriba();
    forr (i,2,MAXP+1) if (!criba[i]) primos.push_back(i);
}


ll cota;
vector<ll>divisores;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>cota;
    buscarprimos();
    for(ll i=1;i*i<=cota;i++){
        if(cota%i==0){
            if(i!=cota/i){
                divisores.push_back(i);
                divisores.push_back(cota/i);
            }
            else divisores.push_back(i);
        }
    }
    sort(divisores.begin(), divisores.end());
    ll respuesta;
    bool posible=false;
    for(int i=divisores.size()-1;i>=0;i--){
        //cout<<divisores[i]<<endl;
        posible=true;
        for(auto j:primos){
            //cout<<j<<endl;
            if(j*j>divisores[i])break;
            if(divisores[i]%(j*j)==0){
                posible=false;
                break;
            }
        }
        if(posible){
            respuesta=divisores[i];
            break;
        }
    }
    cout<<respuesta<<endl;
    
    return 0;
}
