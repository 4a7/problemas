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

#define MAXP 1000010	//no necesariamente primo
int criba[MAXP+1];
void crearcriba(){
	int w[] = {4,2,4,2,4,6,2,6};
	for(int p=25;p<=MAXP;p+=10) criba[p]=5;
	for(int p=9;p<=MAXP;p+=6) criba[p]=3; 
	for(int p=4;p<=MAXP;p+=2) criba[p]=2;
	for(int p=7,cur=0;p*p<=MAXP;p+=w[cur++&7]) if (!criba[p]) 
		for(int j=p*p;j<=MAXP;j+=(p<<1)) if(!criba[j]) criba[j]=p;
}

vector<int> primos;
void buscarprimos(){
	crearcriba();
	forr (i,2,MAXP+1) if (!criba[i]) primos.push_back(i);
}

//factoriza bien numeros hasta MAXP^2
map<ll,ll> fact(ll n){ //O (cant primos)
	map<ll,ll> ret;
	forall(p, primos){
		while(!(n%*p)){
			ret[*p]++;//divisor found
			n/=*p;
		}
	}
	if(n>1) ret[n]++;
	return ret;
}

//factoriza bien numeros hasta MAXP
map<ll,ll> fact2(ll n){ //O (lg n)
	map<ll,ll> ret;
	while (criba[n]){
		ret[criba[n]]++;
		n/=criba[n];
	}
	if(n > 1) ret[n]++;
	return ret;
}
//Usar asi:  divisores(fac, divs, fac.begin()); NO ESTA ORDENADO
void divisores(const map<ll,ll> &f, vector<ll> &divs, map<ll,ll>::iterator it, ll n=1){
    if(it==f.begin()) divs.clear();
    if(it==f.end()) { divs.pb(n);  return; }
    ll p=it->fst, k=it->snd; ++it;
    forn(_, k+1) divisores(f, divs, it, n), n*=p;
}
ll sumDiv (ll n){
  ll rta = 1;
  map<ll,ll> f=fact(n);
  forall(it, f) {
	ll pot = 1, aux = 0;  
	forn(i, it->snd+1) aux += pot, pot *= it->fst;
	rta*=aux;
  } 
  return rta;
}

ll maxcp = -1;

ll eulerPhi (ll n){ // con criba: O(lg n)
  ll rta = n;
  map<ll,ll> f = fact2(n);
  
  forall(it, f){
    rta -= rta / it->first;
  }
  return rta;
}

ll eulerPhi2 (ll n){ // O (sqrt n)
	ll r = n;
	forr (i,2,n+1){
		if ((ll)i*i > n) break;
		if (n % i == 0){
			while (n%i == 0) n/=i;
			r -= r/i; }
	}
	if (n != 1) r-= r/n;
	return r;
}

ll gcd(ll a, ll b){
    return a ? gcd(b%a, a): b;
}


int main() {

    cin.tie(0);
	cout.tie(0);	
	std::ios::sync_with_stdio(false);	
    
	buscarprimos();
	
	//cout << "fp: " << fact2(1000000).size() << endl;
	
	int n, k;
	cin >> n;
	while(n--){
	    cin >> k;
	    maxcp = -1;
	    
        ll cant = eulerPhi(k);
        
        for (ll x = k-1; k >= 0; x--){
        
            if(gcd(k, x)){
                maxcp = x;
                break;
            }    
        }
        
        cout << maxcp * cant << endl;
	    
	}
	
	return 0;
}

