#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int cant[30];
string tira;
vector<int>indices;
bool posible(string tira1){
    for(int i=1;i<tira1.size();i++){
        if(abs(tira1[i]-tira1[i-1])==1)return false;
    }
    return true;
}
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>casos;
    
    while(casos--){
        cin>>tira;
        int ind1, ind2;
        for(int i=0;i<30;i++)cant[i]=0;
        indices.clear();
        for(auto i:tira){
            if(cant[i-'a']==0)indices.push_back(i-'a');
            cant[i-'a']++;
        }
        /*
        for(int i=0;i<27;i++){
            cout<<i<<" "<<cant[i]<<endl;
        }
        */
        bool encontrado=false;
        sort(indices.begin(), indices.end());
        int impares, pares;
        impares=0;
        pares=0;
        ind1=ind2=29;
        for(int i=0;i<indices.size();i++){
            if(indices[i]%2==0)pares++;
            else impares++;
        }
        for(int i=0;i<indices.size();i++){
            for(int j=0;j<indices.size();j++){
                if((indices[i]%2==0 && indices[j]%2==1) && abs(indices[i]-indices[j])>1){
                    ind1=i;
                    ind2=j;
                    encontrado=true;
                    break;
                }
            }
            if(encontrado)break;
        }
        
        string nuevatira="";
        if(pares==0 || impares==0){
            for(int i=0;i<indices.size();i++){
                for(int j=0;j<cant[indices[i]];j++){
                    nuevatira.push_back(indices[i]+'a');
                }
            }
            encontrado=true;
        }
        else{
            for(int i=0;i<indices.size();i++){
                if(indices[i]%2==0 && i!=ind1){
                    for(int j=0;j<cant[indices[i]];j++){
                        nuevatira.push_back(indices[i]+'a');
                    }
                }
            }
            for(int j=0;j<cant[indices[ind1]];j++){
                nuevatira.push_back(indices[ind1]+'a');
            }
            for(int j=0;j<cant[indices[ind2]];j++){
                nuevatira.push_back(indices[ind2]+'a');
            }
            for(int i=0;i<indices.size();i++){
                if(indices[i]%2==1 && i!=ind2){
                    for(int j=0;j<cant[indices[i]];j++){
                        nuevatira.push_back(indices[i]+'a');
                    }
                }
            }
        }
        
        
        if(encontrado) cout<<nuevatira<<endl;
        else cout<<"No answer\n";
       
    }
    
    return 0;
}
