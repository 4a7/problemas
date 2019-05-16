#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int distancia;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int temp;
            cin>>temp;
            if(temp==1){
                distancia = abs(3-i)+abs(3-j);
            }
        }
    }
    cout<<distancia<<endl;
    return 0;
}
