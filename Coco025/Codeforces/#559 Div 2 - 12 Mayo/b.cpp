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
typedef pair<ll, ll> ii;
string str, str2;
ll n, m, t, k;

vector<ll> vec;
vector<ll> vec2;
bool probar(ll d){
    //cout << "D: " << d << endl;
    for (ll x = 0; x < n; x++){
      //  cout << d*x << "/" << vec[x] << endl;
        if(d*x > min(vec[0], vec[x])){
            return false;
        }
    }
    return true;
}

ll binaryS(ll ini, ll fin){
    fin++;
    while(ini+1 != fin){
        ll med = (ini+fin)/2;
        if(probar(med)){
            ini = med;
        }else{
            fin = med;
        }
        //cout << ini << "," << fin << endl;
    }
    return ini;
}

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin >> n;
    m = n;
    while(m--){
        cin >> k;
        vec.push_back(k);
    }
    
    //cout << probar(1) << endl;
    //return 1;
    //sort(vec.begin(), vec.end(), mSort);
    cout << binaryS(0, 1000000000) << endl;

    return 0;
}
