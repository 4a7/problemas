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
ll n, m, t, k, x, y;

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    cin >> n;

    while(n--){
        cin >> k >> x >> y;

        //for (k = 1; k < 5; k++){
        //    for (x = 0; x < 5; x++){
         //       for (y = 0; y < 5; y++){
                    
                    //cout << k << " " << x << " " << y << " = "; 
                    
                    if(k == x && x == y){
                        cout << 2 << endl;
                        continue;
                    }
                    
                    ll nMax = max(x, y);

                    if(nMax > k){
                        if(x == y){
                            cout << 2 << endl;
                        }else{
                            cout << 1 << endl;
                        }      
                    }else if(nMax == k){
                        cout << 1 << endl;
                    }else{
                        if(x == y){
                            if(abs(k - x) >= 2){
                                cout << k - x << endl; 
                            }else{
                                cout << k - x + 1 << endl;
                            }     
                        }else{
                            cout << k - nMax << endl;   
                        }

           //     }
         //   }
       // }
    }

    
}
return 0;
}
