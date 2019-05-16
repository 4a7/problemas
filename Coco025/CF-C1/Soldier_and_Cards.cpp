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
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
string str, str2;
ll n, m, t, k;

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    list<ll> p1;
    list<ll> p2;

    cin >> m;

    cin >> n;
    while(n--){
        cin >> k;
        p1.pb(k);
    }

    cin >> n;
    while(n--){
        cin >> k;
        p2.pb(k);
    }
    //cout << "Leido" << endl;
    ll total = 0;
    set<list<ll>> games1;
    set<list<ll>> games2;
    bool valid = true;
    while(p1.size() && p2.size()){

        if(games1.find(p1) != games1.end() && games2.find(p2) != games2.end()){
            valid = false;
            break;
        } 

        games1.insert(p1);
        games2.insert(p2);

        ll x1 = p1.front();
        ll x2 = p2.front();
        p1.pop_front();
        p2.pop_front();
        
        if(x1 > x2){
            p1.pb(x2);
            p1.pb(x1);
        }else{
            p2.pb(x1);
            p2.pb(x2);
        }
        total++;
    }

    if(valid)
    cout << total << " " << (p1.size() ? 1 : 2) << endl;
    else
    {
        cout << -1 << endl;
    }
    

    return 0;
}








