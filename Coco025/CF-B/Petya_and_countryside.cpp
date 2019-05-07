#include <algorithm>
#include <math.h>       /* log2 */
#include <vector>
#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#define print(s, n) cout << s << ": " << n << "\n"; 
#define forn(n) for (int x = 0; x < n; x++)
#define forin(i, n) for (int x = i; x < n; x++)
#include <map>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string str, str2;

long long n, m, t, k, j;


void printVec(string desc, vector<ll> vec){
	cout << desc << ":" << endl;
	for(ll x = 0; x < vec.size(); x++){
		cout << vec[x] << " " ;
	}	
	cout << endl;
}



int main(){
	cin.tie(NULL);
	cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
	cin >> n;
	
	vector<int> vec;
	
	for(int x = 0; x < n; x++){
		cin >> k;
		vec.push_back(k);
	}
	
	int maxi = -1;
	for(int x = 0; x < n; x++){
		int cant = 1;
		int num = vec[x];
		for(int y = x-1; y >= 0; y--){
			if(vec[y] <= num){
				cant++;
				num = vec[y];
			}else{
				break;
			}
		}
		//cout << x << ","<<cant << endl;
		num = vec[x];
		for(int y = x + 1; y < n; y++){
			if(vec[y] <= num){
				cant++;
				num = vec[y];
			}else{
				break;
			}
		}
		//cout << x << ","<<cant << endl;
		maxi = max(maxi, cant);
	}
	
	cout << maxi << "\n";
	
	return 0;
}














