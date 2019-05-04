#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int>lados;
int largo;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>largo;
    while(largo--){
        int temp;
        cin>>temp;
        lados.push_back(temp);
    }
    bool infi=false;
    ll suma=0;
    for(int i=1;i<lados.size();i++){
        if((lados[i]==1 && lados[i-1]==2) || (lados[i]==2 && lados[i-1]==1)){
            if(i-2>=0 && (lados[i]==2 && lados[i-1]==1 && lados[i-2]==3)){
                suma+=2;
            }
            else suma+=3;
        }
        else if((lados[i]==1 && lados[i-1]==3) || (lados[i]==3 && lados[i-1]==1)){
            
            suma+=4;
        }
        else{
            infi=true;
            suma++;
        }
    }
    if(infi){
        cout<<"Infinite"<<endl;
    }
    else{
        cout<<"Finite"<<endl<<suma<<endl;
    }
    return 0;
}
