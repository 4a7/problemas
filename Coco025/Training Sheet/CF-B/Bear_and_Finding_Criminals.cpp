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
string str, str2, str3;
ll n, m, t, k;

int main(){
    //freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);freopen("log.txt", "w", stderr);
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    cin >> n;
    cin >> m;
    m--;

    bool arr[n+10];
    for (int x = 0; x < n; x++){
        cin >> arr[x]; 
    }

    int res = 0;
    for (int x = m, y = m; x < n || y >= 0; y--, x++){
        bool a = true, b = true;
        if(x < n){
            a = arr[x];
        }
        if(y >= 0){
            b = arr[y];
        }
        //cout << x << "." << y << endl;
        if(a&b){
            if(x != y && x < n && y >= 0)
                res += 2;
            else
                res++;
        }
        //cout <<  res << endl;
    }
    cout << res << endl;


    return 0;
}
