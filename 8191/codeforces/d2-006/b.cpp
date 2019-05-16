#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int r, c;
char presidente;
set<char>mapa;
char matriz[150][150];
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>r>>c>>presidente;
    memset(matriz, 0, sizeof matriz);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>matriz[i][j];
        }
    }
    
    mapa.insert(presidente);
    mapa.insert('.');
    mapa.insert(matriz[0][0]);
    int asociados=0;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(matriz[i][j]==presidente){
                if(mapa.find(matriz[i][j-1])==mapa.end()){
                    asociados++;
                    mapa.insert(matriz[i][j-1]);
                }
                if(mapa.find(matriz[i][j+1])==mapa.end()){
                    asociados++;
                    mapa.insert(matriz[i][j+1]);
                }
                if(mapa.find(matriz[i+1][j])==mapa.end()){
                    asociados++;
                    mapa.insert(matriz[i+1][j]);
                }
                if(mapa.find(matriz[i-1][j])==mapa.end()){
                    asociados++;
                    mapa.insert(matriz[i-1][j]);
                }
            }
        }
    }
    cout<<asociados<<endl;
    return 0;
}
