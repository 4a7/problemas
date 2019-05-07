#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int cant;
ll distancia;
vector<ll>puntos;

bool posible(int k){
    int ii=0;
    int iif=k;
    if(k*2<=puntos.size()){
        for(int i=0;i<k;i++){
            if(i>puntos.size()-k+i)return false;
            int num1=puntos[i];
            int num2=puntos[puntos.size()-k+i];
            //cout<<num1<<" "<<num2<<" "<<k<<endl;
            if(abs(num1-num2)<distancia)return false;
        }
        return true;
    }
    else{
        //cout<<"nop"<<endl;
        return false;
    }
}
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>cant>>distancia;
    while(cant--){
        ll t;
        cin>>t;
        puntos.push_back(t);
    }
    
    sort(puntos.begin(), puntos.end());
    
    cant=puntos.size();
    int inicio=0;
    int fin=cant/2+1;
    int medio;
    for(int i=0;i<201;i++){
        medio=(inicio+fin)/2;
        //cout<<inicio<<" "<<fin<<" "<<medio<<endl;
        
        if(posible(medio)){
            //cout<<123<<endl;
            inicio=medio;
        }
        else{
            //cout<<321<<endl;
            fin=medio;
        }
    }
    
    cout<<medio<<endl;
    return 0;
}
