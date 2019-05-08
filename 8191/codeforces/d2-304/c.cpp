#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int cantidad;
int c1, c2;
vector<int>uno;
vector<int>dos;
set<pair<int, int>>mapa;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>cantidad;
    cin>>c1;
    
    for(int i=0;i<c1;i++){
        int temp;
        cin>>temp;
        uno.push_back(temp);
    }
    cin>>c2;
    for(int i=0;i<c2;i++){
        int temp;
        cin>>temp;
        dos.push_back(temp);
    }
    bool empate=true;
    int partidas=0;
    for(int i=0;i<10000000;i++){
        //cout<<partidas<<" "<<c1<<" "<<c2<<endl;
        if(c1==0){
            empate=false;
            break;
        }
        if(c2==0){
            empate=false;
            break;
        }
        partidas++;
        if(uno[partidas-1]>dos[partidas-1]){
            uno.push_back(dos[partidas-1]);
            uno.push_back(uno[partidas-1]);
            c1++;
            c2--;
        }
        else{
            dos.push_back(uno[partidas-1]);
            dos.push_back(dos[partidas-1]);
            c1--;
            c2++;
        }
    }
    if(empate){
        cout<<-1<<endl;
    }
    else{
        cout<<partidas<<" "<<((c1==0)?2:1)<<endl;
    }
    return 0;
}
