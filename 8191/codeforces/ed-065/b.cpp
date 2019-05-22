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
int num;

vector<int>divs={4, 8, 15, 16, 23, 42};
vector<int>unodos;
vector<int>dostres;
vector<int>trescuatro;
vector<int>cuatrocinco;
int uno, dos, tres, cuatro, cinco, seis;
set<int>mapa;
int main(){
    //cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    for(auto i:divs)mapa.insert(i);
    reverse(divs.begin(), divs.end());
    cout<<"? "<<1<<" "<<2<<endl;
    cout.flush();
    cin>>num;
    for(auto i:divs){
        if(num%i==0 && mapa.find(num/i)!=mapa.end() && num/i!=i)unodos.pb(i);
    }
    cout<<"? "<<2<<" "<<3<<endl;
    cout.flush();
    cin>>num;
    for(auto i:divs){
        if(num%i==0 && mapa.find(num/i)!=mapa.end() && num/i!=i)dostres.pb(i);
    }
    
    
    cout<<"? "<<3<<" "<<4<<endl;
    cout.flush();
    cin>>num;
    for(auto i:divs){
        if(num%i==0 && mapa.find(num/i)!=mapa.end() && num/i!=i)trescuatro.pb(i);
    }
    
    
    cout<<"? "<<4<<" "<<5<<endl;
    cout.flush();
    cin>>num;
    for(auto i:divs){
        if(num%i==0 && mapa.find(num/i)!=mapa.end() && num/i!=i)cuatrocinco.pb(i);
    }
    for(auto i:unodos){
        bool esta=false;
        for(auto j:dostres){
            if(i==j)esta=true;
        }
        if(!esta){
            uno=i;
            break;
        }
    }
    for(auto i:dostres){
        bool esta=false;
        for(auto j:trescuatro){
            if(i==j)esta=true;
        }
        if(!esta){
            dos=i;
            break;
        }
    }
    //cout<<"trecuatro"<<endl;
    for(auto i:trescuatro){
        //cout<<i<<endl;
        bool esta=false;
        for(auto j:cuatrocinco){
            if(i==j)esta=true;
        }
        //cout<<i<<" "<<" "<<esta<<endl;
        if(!esta){
            tres=i;
            break;
        }
    }
    for(auto i:cuatrocinco){
        bool esta=false;
        for(auto j:trescuatro){
            if(i==j)esta=true;
        }
        if(esta){
            cuatro=i;
            break;
        }
    }
    for(auto i:cuatrocinco){
        if(i!=cuatro){
            cinco=i;
            break;
        }
    }
    //cout<<uno<<" "<<dos<<endl;
    seis=7418880/(uno*dos*tres*cuatro*cinco);
    cout<<"! "<<uno<<" "<<dos<<" "<<tres<<" "<<cuatro<<" "<<cinco<<" "<<seis<<endl;
    cout.flush();
    return 0;
}
