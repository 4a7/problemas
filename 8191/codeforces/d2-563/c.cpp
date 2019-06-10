#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
#define pb push_back
#define PI 2*acos(0.0)
#define show(x) cout<< #x <<" is "<< x <<"\n"
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
int n;
int colores[100100];
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>n;
    int k=1;
    for(int i=2;i<=n;i++){
        if(colores[i]==0){
            colores[i]=k;
            for(int j=i+i;j<=n;j+=i){
                colores[j]=k;
            }
            k++;
        }
        if(i!=2)cout<<" ";
        cout<<colores[i];
    }
    cout<<endl;
    return 0;
}
