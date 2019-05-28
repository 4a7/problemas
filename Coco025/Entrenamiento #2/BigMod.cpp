#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>       /* log2 */
#include <vector>
#include <string>
#include <iostream>
#include <cstring>
#include <map>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
string str, str2;
ll n, m, t, k;

ll expmod (ll b, ll e, ll m){//O(log e)
	if(!e) return 1;
	ll q = expmod(b,e/2,m); q=(q*q)%m;
	return e%2? (b * q)%m : q;
}

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    
    while(cin >> n >> m >> k){
        cout << expmod(n, m, k) << endl;
    }

    return 0;
}
