#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
#define MAXV 50500
#define MAXE 100000000
#define addedge(a, b) (G[a].push_back(b))
using namespace std;
typedef long long ll;
vector<int>G[MAXV*2];
struct edge{int e, nxt;};
int V, E;
edge e[MAXE], er[MAXE];
int sp[MAXV], spr[MAXV];
int group_cnt, group_num[MAXV];
bool v[MAXV];
int stk[MAXV];
void fill_forward(int x){
    int i; v[x]=true;
    for(i=sp[x]; i; i=e[i].nxt) if(!v[e[i].e])fill_forward(e[i].e);
    stk[++stk[0]]=x; 
}
void fill_backward(int x){
    int i; v[x]=false;
    group_num[x]=group_cnt;
    for(i=spr[x];i;i=er[i].nxt) if(v[er[i].e])fill_backward(er[i].e);
}
    
void add_edge(int v1, int v2){
    e[++E].e=v2;e[E].nxt=sp[v1];sp[v1]=E;
    er[E].e=v1; er[E].nxt=spr[v2];spr[v2]=E;
}
void SCC(){
    int i;
    stk[0]=0;
    memset(v, false, sizeof v);
    for(i=1;i<=V;i++){
        if(!v[i])fill_forward(i);
    }
    //cout<<214<<endl;
    group_cnt=0;
    for(int i=stk[0];i>=1;i--){
        if(v[stk[i]]){
            group_cnt++;
            fill_backward(stk[i]);
        }
    }
}

int grupos, lineas;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    while(cin>>grupos>>lineas){
        //AdjList.clear();
        //AdjList.assign(grupos+10, vector<int>());
        memset(sp, 0, sizeof sp);
        memset(spr, 0, sizeof spr);
        E=0;
        V=grupos;
        while(lineas--){
            
            int tipo;
            cin>>tipo;
            if(tipo==1){
                int a, b;
                cin>>a>>b;
                //AdjList[a].push_back(b);
                add_edge(a, b);
            }
            else{
                int fuente, destino;
                cin>>fuente;tipo--;
                while(tipo--){
                    cin>>destino;
                    add_edge(fuente, destino);
                    add_edge(destino, fuente);
                    //AdjList[destino].push_back(fuente);
                }
            }
        }
        //cout<<124<<endl;
        SCC();
        //cout<<123<<endl;
        int numgrup=group_num[1];
        bool posible=true;
        for(int i=2;i<=grupos;i++){
            if(group_num[i]!=numgrup)posible=false;
        }
        if(posible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    } 
    
    return 0;
}
