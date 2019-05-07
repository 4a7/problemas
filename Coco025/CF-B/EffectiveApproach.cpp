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

int arr[100100];

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    cin >> n;
    t = n;
    int p = 1;
    while(t--){
        cin >> k;
        arr[k] = p;
        p++;
    }
    
    cin >> m;
    ll r1 = 0, r2 = 0;
    while(m--){
        cin >> k;
        r1 += arr[k];
        r2 += n+1-arr[k];
    }
    cout << r1 << " " << r2 << endl;

    return 0;
}












