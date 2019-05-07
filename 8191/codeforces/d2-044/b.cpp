#include <bits/stdc++.h>
#define endl "\n"
#define VISITED 2
#define EXPLORED 1
#define UNVISITED 0
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int casos;
vector<int>toporder;
int visited[10];
vector<vector<int>>AdjList;
bool hayciclosv=false;
void hayciclos(int i){
    if(visited[i]){
        if(visited[i]==EXPLORED)
            hayciclosv=true;
        return;
    }
    visited[i]=EXPLORED;
    for(auto j:AdjList[i]){
        hayciclos(j);
    }
    toporder.push_back(i);
    visited[i]=VISITED;
}

int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    
    string s1;
    AdjList.assign(4, vector<int>());
    for(int i=0;i<3;i++){
        cin>>s1;
        if(s1[1]=='<')
            AdjList[s1[2]-'A'].push_back(s1[0]-'A');
        else
            AdjList[s1[0]-'A'].push_back(s1[2]-'A');
    }
    for(int i=0;i<3;i++)hayciclos(i);
    if(hayciclosv)cout<<"Impossible"<<endl;
    else{
        //reverse(toporder.begin(), toporder.end());
        string s="";
        for(auto i:toporder)s.push_back(i+'A');
        cout<<s<<endl;
    }
    return 0;
}
