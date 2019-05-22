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

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    int x, y, a, b;
    bool out = false;

    for(x = 0; x < 5; x++){
        for(y = 0; y < 5; y++){
            cin >> n;
            if(n == 1){
                a = x;
                b = y;
            }
        }    
        if(out) break;
    }
    
    cout << abs(a-2) + abs(b-2);

    return 0;
}
