#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int n, a;
int cids[100];
int der, izq;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>n>>a;
    der=izq=a;
    for(int i=1;i<=n;i++){
        cin>>cids[i];
    }
    int criminales=0;
    while(izq>=1 || der<=n){
        int sumas=0;
        int disp=0;
        if(izq>=1)sumas+=cids[izq], disp++;
        if(der<=n)sumas+=cids[der], disp++;
        if(izq==der)sumas--, disp--;
        if(sumas==disp)criminales+=sumas;
        
        izq--;
        der++;
    }
    cout<<criminales<<endl;
    return 0;
}
