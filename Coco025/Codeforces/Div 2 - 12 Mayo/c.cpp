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


int valido(ll n){
    //cout << "K: " << n << endl;
    for (int x = 0; str[x]; x++){
        if(str[x] == '+'){
            n++;
        }else{
            n--;
        }
        if(n < 0){
            return -1;
        }
    }
    return n;

}

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    cin >> n;
    cin >> str;
    for (k = 0; ; k++){
        t = valido(k);
        if(t != -1){
            cout << t << endl;
            break;
        }
    }

    return 0;
}
