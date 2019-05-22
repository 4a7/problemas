#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#include <math.h>       /* log2 */
#include <vector>
#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#define print(s, n) cout << s << ": " << n << "\n"; 
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define dprint(v) cerr << #v"=" << v << endl //;)
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;

#define MAXP 2000000	//no necesariamente primo

ll n,m;

ll criba[MAXP+1];
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
	//cout << "CANT PRIMOS: " << primos.size() << endl;
}

//factoriza bien numeros hasta MAXP
map<ll,ll> fact2(ll n){ //O (lg n)
	map<ll,ll> ret;
	while (criba[n]){
		ret[criba[n]]++;
		n/=criba[n];
	}
	if(n>1) ret[n]++;
	return ret;
}

//factoriza bien numeros hasta MAXP^2
map<ll,ll> fact(ll n){ //O (cant primos)
map<ll,ll> ret;
 forall(p, primos){
 while(!(n %*p)){
 ret[*p]++;//divisor found
 n/=*p;
 }
 }
 if(n>1) ret[n]++;
 return ret;
 }


ll numDiv (ll n){
 ll rta = 1;
 map<ll,ll> f = fact2(n);
forall(it, f) rta *= (it->second + 1);
 return rta;
 }
 
 ll sumDiv (ll n){
	 ll rta = 1;
	 map<ll,ll> f=fact2(n);
	 forall(it, f) {
	 	ll pot = 1, aux = 0;
	 	forn(i, it->snd+1) aux += pot, pot *= it->fst;
	 		rta*=aux;
	 }
	 return rta;
 }

 //Usar asi: divisores(fac, divs, fac.begin()); NO ESTA ORDENADO
 void divisores(const map<ll,ll> &f, vector<ll> &divs, map<ll,ll>::iterator it, ll n=1){
	if(it==f.begin()) 
		divs.clear();
	if(it==f.end()) {
		divs.pb(n);
		return;
	}
	ll p=it->first, k=it->second; ++it;
	forn(_, k+1) divisores(f, divs, it, n), n*=p;
 }

bool mSort(ll x, ll y){
	return x > y;
}

int main() {
	//cout << "a" << endl;
	buscarprimos();
	
	cin >> n;
	map<ll, ll> res = fact(n); 
	vector<ll> divs;
	divisores(res, divs, res.begin());
	
	for (auto it = res.begin(); it != res.end(); it++){
		ll a = it->first;
		ll b = it->second;
		cout << a << " > " << b << endl;
	}

	sort(divs.begin(), divs.end(), mSort);

	for (int x = 0; x < divs.size(); x++){
		cout << divs[x] << endl;
		double sq = sqrt(divs[x]);
		if()
	}



	return 0;
}
