#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int elementos;
vector<int>arreglo;
vector<int>anteriores;
vector<int>inicios;
vector<int>fines;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>elementos;
    anteriores.push_back(-1);
    while(elementos--){
        int temp;
        cin>>temp;
        arreglo.push_back(temp);
        anteriores.push_back(temp);
    }
    int inicio=0;
    int fin=0;
    int anterior=-1;
    int reversas=0;
    bool enreversa=false;
    for(int i=0;i<arreglo.size();i++){
        if(enreversa){
            if(arreglo[i]<=anterior){
                fin=i;
                
            }
            else{
                if(arreglo[inicio]<=arreglo[i] && arreglo[fin]>=anteriores[inicio]){
                    inicios.push_back(inicio);
                    fines.push_back(fin);
                }
                inicio=i;
                enreversa=false;
            }
            
            anterior=arreglo[i];
        }
        else{
            if(arreglo[i]<=anterior){
                enreversa=true;
                reversas++;
                fin=i;
                anterior=arreglo[i];
            }
            else{
                inicio=i;
                anterior=arreglo[i];
            }
        }
    }
    if(enreversa){
        if(arreglo[fin]>=anteriores[inicio]){
            inicios.push_back(inicio);
            fines.push_back(fin);
        }
    }
    //cout<<inicio<<" "<<fin<<endl;
    if(reversas==0){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
    }
    else if(inicios.size()==1){
        cout<<"yes"<<endl;
        cout<<inicios[0]+1<<" "<<fines[0]+1<<endl;
    }
    else cout<<"no"<<endl;
    //for(auto i:inicios)cout<<i<<" "<<endl;
    return 0;

}
