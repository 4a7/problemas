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

bool mSort(int x, int y){ return x > y; }

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    while(cin >> a >> b >> c >> x >> y && a+b+c+x+y != 0){
        vector<int> Princess;
        vector<int> Prince;  
        vector<int> P2;

        Princess.push_back(a);    
        Princess.push_back(b);    
        Princess.push_back(c);  

        P2.push_back(a);    
        P2.push_back(b);    
        P2.push_back(c);
        P2.push_back(x);    
        P2.push_back(y);    

        Prince.push_back(x);    
        Prince.push_back(y);     

        sort(Princess.begin(), Princess.end());
        sort(Prince.begin(), Prince.end(), mSort);

        for (int x = 0; x < Prince.size(); x++){
            for (int y = 0; x < Princess.size(); y++){
                if(Princess[y] > Prince[x]){
                    Prince.erase(x);
                    Princess.erase(y);
                    break;
                }
            }
        }
        if(Princess.size() == 1){
            cout << -1 endl;
        }else{
            
            for (int x = 0; x < P2.size(); x++){
                
            }
        }

    }

    return 0;
}
