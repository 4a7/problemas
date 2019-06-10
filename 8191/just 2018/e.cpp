#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<pair<int, pair<int, int>>> elementos;
int casos, n,x, y;
int main(){
    cin.tie(0);
	cout.tie(0);	
	std::ios::sync_with_stdio(false);	
    cin>>casos;
    while(casos--){
        cin>>n>>x>>y;
        elementos.clear();
        for(int i=1;i<=n;i++){
            int distancia, monedas;
            cin>>distancia>>monedas;
            elementos.push_back({distancia, {monedas, i}});
        }
        sort(elementos.begin(),elementos.end());
        int mejor=-1;
        int mejor2=0;
        int cont=0;
        for(auto i:elementos){
            if(i.first<=x && i.second.first>=y){
                if(mejor==-1){
                    mejor=i.second.second;
                    mejor2=cont;
                }
                else{
                    if(elementos[mejor2].first==i.first){
                        if(elementos[mejor2].second.first<i.second.first){
                            mejor=i.second.second;
                            mejor2=cont;
                        }
                        else if(elementos[mejor2].second.first==i.second.first){
                            if(elementos[mejor2].second.second>i.second.second){
                                mejor=i.second.second;
                                mejor2=cont;
                            }
                        }
                    }
                }
            }
            cont++;
        }
        if(mejor==-1)cout<<mejor<<endl;
        else cout<<mejor<<endl;
    }
    return 0;
}
