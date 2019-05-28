#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
#define pb push_back
#define MAXN 1000100
#define operacion(x, y) x+y
#define forr(i, a, b) for(int i=(a); i<(b); i++)
#define forn(i, n) forr(i, 0, n)
#define dforn(i, n) for(int i=n-1; i>=0; i--)
#define popcount __builtin_popcount
int dp[100010][1026];
//int dp2[100010][1026];
ll temp;
int nums;
vector<ll> divs={2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
pair<int, int> numeros[10010];
int nums2;
map<ll, ll>mapa;

int d2p[35];
ll temp2;

int contar(int pos, int mascara){
    
	if(pos >= nums2){
        if(mascara == 0)return 0;
        return -1;
    }

    if(dp[pos][mascara] == -1){
        int temporal=max(contar(pos+1, mascara), 1+contar(pos+1, mascara^numeros[pos].second));
        dp[pos][mascara]=temporal;
        //dp2[pos][mascara]=1;
    }
    return dp[pos][mascara];

}

int main(){
    ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 

    d2p[2]=0;
    d2p[3]=1;
    d2p[5]=2;
    d2p[7]=3;
    d2p[11]=4;
    d2p[13]=5;
    d2p[17]=6;
    d2p[19]=7;
    d2p[23]=8;
    d2p[29]=9;
	cin>>nums;
	nums2 = nums;
	memset(dp, -1, sizeof dp);
	int i = 0;
	while(nums--){
	    cin>>temp;
	    temp2=temp;
	    int mascara = 0;
	    for(auto i : divs){
	        int cant = 0;
	        while(temp%i==0){
	            cant++;
	            cant = cant&1;
	            temp = temp/i;
	        }
	        if(!cant){
	            mascara&=~(1<<d2p[i]);
	        }
	        else{
	            mascara|=(1<<d2p[i]);
	        }
	    }
	    numeros[i] = {temp2, mascara};
		i++;
	}
	cout<<contar(0, 0)<<endl;

	return 0;
}

