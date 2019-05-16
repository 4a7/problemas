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

vector<int> vec;
bool probar(int d){
    d = d - vec[0];
    for (int x = 0; x < n; x++){
        //cout << d << endl;
        if(d < 0){
            return false;
        }else {
            d += vec[x] - vec[x+1];
        }

    }
    return true;
}


int binaryS(int ini, int fin){
    fin++;
    while(ini+1 != fin){
        //cout << ini << "." << fin << endl;
        int med = (ini+fin)/2;
        if(probar(med)){
            fin = med;
        }else{
            ini = med;
        }
        //cout << ini << "," << fin << endl;
    }
    return fin;
}

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    cin >> n;
    t = n;
    while(t--){
        cin >> k;
        vec.push_back(k);
    }
    //cout << probar(3);
    //return  0;
    cout << binaryS(0, 100000) << endl;

    return 0;
}
