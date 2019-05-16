#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>       /* log2 */
#include <vector>
#include <string>
#include <iostream>
#include <cstring>
#include <map>
using namespace std;
typedef long long ll;
string str, str2;
ll n, m, t, k;

int main(){ 
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
	cin >> k;

	int arr[k+100];
	arr[0] = 0;
	int p = 2;
	int t = 0;

	while(k--){
		cin >> n;
		arr[p] = n;
		if(arr[p-1] == 2 && arr[p] == 3 || arr[p-1] == 3 && arr[p] == 2){ // Triangulo > cuadrado, cuadrado > triangulo
			cout << "Infinite";
			return 0;
		}else{
			if(arr[p-2] == 3 && arr[p-1] == 1 && arr[p] == 2){ // Cuadrado > circulo > triangulo
				t += 2;
			}else if(arr[p-1] == 1 && arr[p] == 2 || arr[p-1] == 2 && arr[p] == 1){ // Triangulo > Circulo
				t += 3;
			}else if(arr[p-1] == 1 && arr[p] == 3 || arr[p-1] == 3 && arr[p] == 1){ // Cuadrado > circulo
				t += 4;
			}
		}
		p++;
	}
	cout << "Finite\n" << t;
	return 0; 
} 