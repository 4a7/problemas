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

    cin >> n >> str;

    int D = 0, A = 0;

    for (int x = 0; str[x]; x++){
        if(str[x] == 'A') A++;
        else D++;
    }

    if(D==A) 
        cout << "Friendship"; 
    else if(D>A) 
        cout << "Danik";
    else 
        cout << "Anton";
    

    return 0;
}
