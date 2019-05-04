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
double n, m, t, k;

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    cin >> n >> k;

    int t = 0;
    while(n--){
        cin >> m;
        t += ceil(m/k);
    }

    cout << t << endl;

    return 0;
}
