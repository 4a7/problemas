#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int limak, bob;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>limak>>bob;
    int cont=0;
    while(true){
        limak*=3;
        bob*=2;
        cont++;
        if(limak>bob)break;
    }
    cout<<cont<<endl;
    return 0;
}
