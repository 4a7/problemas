#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int secciones;
vector<int>jardin;

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>secciones;
    for(int i=0;i<secciones;i++){
        int temp;cin>>temp;
        jardin.push_back(temp);
    }
    int contador=1;
    int maxcont=-1;
    int neutro=0;
    bool creciendo=true;
    for(int i=1;i<secciones;i++){
        if(jardin[i]>jardin[i-1]){
            
            if(creciendo)contador++;
            else{
                if(contador>maxcont)maxcont=contador;
                contador=neutro+2, creciendo=true;
            }
            neutro=0;
        }
        else if(jardin[i]<jardin[i-1]){
            if(creciendo){
                contador++;
                creciendo=false;
            }
            else{
                contador++;
            }
            neutro=0;
        }
        else{
            contador++;
            neutro++;
        }
    }
    if(contador>maxcont)maxcont=contador;
    cout<<maxcont<<endl;
    return 0;
}
