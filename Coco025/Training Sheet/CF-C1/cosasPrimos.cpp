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

#define MAXP 20000000	//no necesariamente primo

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


int main() {
	//cout << "a" << endl;
	buscarprimos();
	
	vector<pair<ll, ll>> vec;
	vec.push_back({0,0});

	for (int x = 1; x < primos.size(); x++){
		if(primos[x]-2 == primos[x-1])
			vec.push_back({primos[x-1], primos[x]});
	}

	//cout << vec.size() << endl;

	//cin.tie(NULL);
    //ios_base::sync_with_stdio(false);
	

	while(cin >> n){
		cout << "(" << vec[n].first << ", " << vec[n].second << ")" << endl;
	}
	
	return 0;
}
