#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int linternas;
double largo;
vector<double>posiciones;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>linternas>>largo;
    for(int i=0;i<linternas;i++){
        double temp;
        cin>>temp;
        posiciones.push_back(temp);
    }
    double inicio=0.0;
    double fin = largo;
    double medio;
    double respuesta=0.0;
    sort(posiciones.begin(), posiciones.end());
    
    respuesta=max(respuesta, (double)posiciones[0]);
    //cout<<respuesta<<" "<<posiciones[0]<<endl;
    respuesta=max(respuesta, largo-posiciones[posiciones.size()-1]);
    //cout<<respuesta<<endl;
    for(int i=0;i<posiciones.size()-1;i++){
        double temp=(posiciones[i+1]-posiciones[i])/2.0;
        respuesta=max(respuesta, temp);
    }
    cout<<fixed<<setprecision(10)<<respuesta<<endl;
    return 0;
}
