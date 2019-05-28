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

    //freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout); 

    cin >> n; n--;
    cin >> str;
    int tipo = 1;
    if(str[0] == '1') // 1 = 01, 2 = 10
        tipo = 2;

    int cant = 1;
    while(n--){        
        cin >> str;
        //cout << str << endl;
        if(str[0] == '1' && tipo == 1){ // 
            cant += 1;
            tipo = 2;
        }else if(str[0] == '0' && tipo == 2){
            cant += 1;
            tipo = 1;
        }
    }
    cout << cant << endl;

    return 0;
}
