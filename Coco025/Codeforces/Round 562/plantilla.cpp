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
ll n, m, t, k, a, b, x, y;

int main(){
    //cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    //freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout); 

    cin >> n >> a >> x >> b >> y;

    while(true){
        
        //cout << "("<< a << "," << b << ")"<< endl;

        if(a == b){
            cout << "YES" << endl;
            break;
        }

        if(a == x){
            cout << "NO" << endl;
            break;
        }

        if(b == y){
            cout << "NO" << endl;
            break;
        }

        a = (a+1)%(n+1);
        if(a == 0){
            a++;
        }

        b = (b-1);
        if(b == 0){
            b = n;
        }

        

    }

    return 0;
}
