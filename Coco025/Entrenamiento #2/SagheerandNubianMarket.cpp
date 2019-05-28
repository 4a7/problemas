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

vector<pair<ll, ll>> cost;
ll mejorCosto = 0;
ll maxCost = 0;

bool probar(ll r){
    ll costo = 0;
    for (int x = 0; x < cost.size(); x++){
        costo += cost[x].first + cost[x].second * r;
        if(costo > maxCost){
            return false;
        }
    }
    mejorCosto = costo;
    return true;
}

ll binaryS(ll ini, ll fin){
    fin++;
    while(ini+1 != fin){
        ll med = (ini+fin)/2;
        if(probar(med)){
            fin = med;
        }else{
            ini = med;
        }
    }
    return ini;
}

int main(){
    //cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 

    cin >> n;
    cin >> maxCost;

    int x = 1;
    while(n--){
        cin >> k;
        cost.push_back({k, x});
        x++;
    }

    sort(cost.begin(), cost.end());

    ll mejorK = binaryS(0, 1000000000);

    cout << mejorK << endl;

    return 0;
}
