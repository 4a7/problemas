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
#define print(x) cout << x << endl;
#define print2(x, y) cout << x << y << endl;
#define printVec(vec) for (ll x = 0; x < vec.size();x++) cout << vec[x] << " "; 

vector<ll> vec;
ll arr[1000010];

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    cin >> n;
    
    memset(arr, 0, sizeof(arr));
    m = n;
    while(m--){
        cin >> k;
        vec.push_back(k);
    }

    ll sumaAcumulada = 0;
    ll cantItems = 0;
    ll res = 0;
    for (int x = n-1; x >= 0; x--){
        ll a = vec[x];
        arr[a]++;
        cantItems++;
        sumaAcumulada += a;
        res += (sumaAcumulada - arr[a-1]*(a-1) - arr[a]*(a) - arr[a+1]*(a+1)) - (cantItems - arr[a-1] - arr[a] - arr[a+1] ) * a;
    }
    cout << res << endl;
    
    return 0;
}



