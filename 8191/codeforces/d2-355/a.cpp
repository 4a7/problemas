#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
int amigos, altura;
int ancho=0;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>amigos>>altura;
    while(amigos--){
        int temp;
        cin>>temp;
        if(temp>altura)ancho+=2;
        else ancho++;
    }
    cout<<ancho<<endl;
    return 0;
}
