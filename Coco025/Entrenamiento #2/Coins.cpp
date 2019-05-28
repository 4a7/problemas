#include <bits/stdc++.h>
using namespace std;
 
vector< vector<int> > AdjList;
int visited[1005];
 
#define UNVISITED 0
#define VISITED 1
#define EXPLORED 2
using namespace std;

vector<int> topo;   //lista ordenada
queue<int> noin;   //nodos con no entradas
vector<int>entradas;    //contador de las entradas a cada nodo

int main() {
	
    //freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout); 

    int N, M;
    N = 3, M = 3;

    AdjList.assign(N, vector<int>());
    entradas.assign(N, 0);
    memset(visited, 0, sizeof(visited));

    while (M--){
        string str;
        cin >> str;
        int a, b;
        a = str[0] - 'A';
        b = str[2] - 'A';
        //cout << a << b << endl;
        if(str[1] == '>'){
            AdjList[a].push_back(b);
            entradas[b]++;
        }else{
            AdjList[b].push_back(a);
            entradas[a]++;
        }   
    }

    for(int i=0;i<N;i++){   //pone todos los nodos sin entradas en una lista
        if(!entradas[i])noin.push(i);
    }
    
    while(!noin.empty()){
        int v=noin.front();noin.pop();
        topo.push_back(v);
        for(auto u:AdjList[v]){
            entradas[u]--;
            if(entradas[u]==0)noin.push(u);
        }
        
    }
    //si no todos los valores de entradas son 0 => hay un ciclo
    int fin = topo.size();
    if(fin == 0){
        cout << "Impossible" << endl;
        return 0;
    }

    for(int x = fin-1; x >= 0; x--){
        cout << (char)('A' + topo[x]);
    }
    
}





