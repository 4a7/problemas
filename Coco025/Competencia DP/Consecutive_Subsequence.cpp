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

vector<ll> mVec;
map<ll, ll> respuesta;
map<ll, ll> cant;

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

		cin >> n;
		mVec.push_back(-1);
		for (int x = 1; x <= n; x++){ // O(n log(n))	
				cin >> k;
				mVec.push_back(k);
				//respuesta[k] = x; 
				cant[k] = 1;
		}

		map<ll, ll> mMap;

		ll max = 1;
		ll maxP = mVec[1];

		for (int x = 1; x <= n; x++){ // O(n log(n))
			
			k = mVec[x];

			auto k_1 = mMap.find(k - 1);
			
			if(k_1 != mMap.end()){
				//respuesta[k] = k_1->second;
				cant[k] = cant[k-1] + 1;
				
				if(cant[k] > max){ 
					maxP = k;
					max = cant[k];
				}
			}
			//if(mMap.find(k) == mMap.end())
			mMap[k] = x;
		}

		/*vector<ll> resp;
		for(int x = 0; x < max; x++){
			ll pos = mVec[respuesta[maxP]];
			resp.push_back(pos);
			maxP--;
		}*/

		cout << max << endl;
		ll ini = maxP - max + 1;
		for (int x = 1; x <= n; x++){
			if(mVec[x] == ini){
					cout << x << " ";
					ini++;
			}
		}

		return 0;
}
