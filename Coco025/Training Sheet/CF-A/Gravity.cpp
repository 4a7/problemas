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

    cin >> n;
    vector<int> vec;
    while(n--){
        cin >> k;
        vec.push_back(k);
    }

    sort(vec.begin(), vec.end());

    for (int x = 0; x<vec.size();x++){
        cout << vec[x] << " ";
    }

    return 0;
}
