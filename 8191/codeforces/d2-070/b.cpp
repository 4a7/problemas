#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int largo;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>largo;
    string base="ROYGBIV";
    string base2="GBIV";
    string resultado="";
    while(largo-7>=0){
        resultado+=base;
        largo-=7;
    }
    if(largo>=4){
        for(int i=0;i<largo;i++){
            resultado.push_back(base[i]);
        }
    }
    else if(largo>0 && largo<4){
        for(int i=0;i<largo;i++)
            resultado.push_back(base2[i]);
    }
    cout<<resultado<<endl;
    return 0;
}
