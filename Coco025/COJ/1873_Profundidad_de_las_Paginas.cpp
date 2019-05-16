#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>       /* log2 */
#include <vector>
#include <string>
#include <iostream>
#include <cstring>
#include <map>
#define endl "\n"
#define inf 1e8
#define forall(it,v) for(auto it = v.begin(); it != v.end(); ++it)
#define pb push_back
#define fst first
#define snd second
#define sz(c) ((int)c.size())
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
string str, str2;
ll n, m, t, k;

#define INF 1e9
int N;
#define MAX_V 100
vector<ii> G[MAX_V];
//To add an edge use
#define add(a, b, w) G[a].pb(make_pair(w, b))

ll dijkstra(int s, int t){//O(|E| log |V|)
	priority_queue<ii, vector<ii>, greater<ii> > Q;
	vector<ll> dist(N, 1000000000);
    vector<ll> dad(N, -1);
	Q.push(make_pair(0, s)); 
    dist[s] = 0;
	while(sz(Q)){
		ii p = Q.top(); Q.pop();
		if(p.snd == t) break;
		forall(it, G[p.snd])
			if(dist[p.snd] + it->first < dist[it->snd]){
				dist[it->snd] = dist[p.snd] + it->fst;
				dad[it->snd] = p.snd;
				Q.push(make_pair(dist[it->snd], it->snd));	}
	}
	return dist[t];

	if(dist[t]<INF)//path generator
		for(int i=t; i!=-1; i=dad[i])
			printf("%d%c", i, (i==s?'\n':' '));
}

int main(){
    //cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);

    cin >> n;
    ll a, b, c, s, t;
    while(n--){
        cin >> N >> b >> c;
        while(b--){
            cin >> s >> t;
            //s--;t--;
            add(s, t, 1);
        }

        for(int x = 0; x < MAX_V; x++){
            if(G[x].size() > 0){
                cout << x << ": " ;
                for (int y = 0; y < G[x].size(); y++){
                    cout << G[x][y].second << " - ";
                }
                cout << endl;
            }
        }

        while(c--){
            cin >> k;
            //k--;
            ll res =  dijkstra(1, k) + 1;
            if(res > 100) res = -1;
            cout << res << endl;
        }

        for (int x = 0; x < MAX_V; x++)
            G[x].clear();
        
        
    }

    return 0;
}






