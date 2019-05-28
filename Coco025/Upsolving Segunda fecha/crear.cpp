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
#define popcount __builtin_popcount
int dp[100010][1026];
//int dp2[100010][1026];
ll temp;
int nums;
vector<ll> divs={2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
pair<int, int> numeros[10010];
int nums2;
map<ll, ll>mapa;

int d2p[35];
ll temp2;


int main(){
    ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

    //freopen("input.txt", "r", stdin); 
    freopen("input.txt", "w", stdout); 

	int n = 100000;
	cout << n << endl;
	for (int x = 0; x < n; x++){
		cout << "144115188075855872" << endl;
	}
    
	return 0;
}

