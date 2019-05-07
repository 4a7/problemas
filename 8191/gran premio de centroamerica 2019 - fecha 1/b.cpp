#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
#define pb push_back
#define MAXN 1000100
#define operacion(x, y) x+y
#define forr(i, a, b) for(int i=(a); i<(b); i++)
#define forn(i, n) forr(i, 0, n)
#define dforn(i, n) for(int i=n-1; i>=0; i--)
int casos;
ll dias, cajas;
ll modulo=986444689;
ll nck(int n, int k){ 
    ll res = 1; 
    if ( k > n - k ) 
        k = n - k; 
    for (ll i = 0; i < k; ++i){ 
        res *= (n - i); 
        res /= (i + 1); 
        res = res%modulo;
    }
    return res; 
}
int main(){
    ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
	cin>>casos;
	while(casos--){
	    cin>>dias>>cajas;
	    int cajasiniciales=cajas;
	    string linea1, linea2;
	    cin.ignore();
	    getline(cin, linea1);
	    istringstream is(linea1);
	    string X;
	    int distintos=0;
	    while(is>>X){
	        cajas--;
	    }
	    //cin.ignore();
	    getline(cin, linea2);
	    
	    istringstream is2(linea2);
	    string X2;
	    while(is2>>X2){
	        cajas--;
	        cajas--;
	    }
	    //n bolas en k cajas
	    //(n+k-1), n=cajas
	    //( k-1 )  k=dias
	    ll n = cajas;
	    ll k = dias;
	    ll respuesta=nck(n+k-1, k-1);
	    cout<<respuesta<<endl;
	}
	return 0;
}

