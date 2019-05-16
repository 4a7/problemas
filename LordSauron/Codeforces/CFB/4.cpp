#include <bits/stdc++.h>


using namespace std;


struct container{
    int boxes;
    int matches;

};

bool sortMatches(container i, container j){
    return i.matches > j.matches;
}


int main(){


    int n, m;

    cin >> n >> m;


    vector<container> containers;

    container temp;
    int a, b;
    for(int i = 0; i < m; i ++){
        cin >> a >> b;
        temp.boxes = a;
        temp.matches = b;
        containers.push_back(temp);
    }


    sort(containers.begin(), containers.end(), sortMatches);


    int resul = 0;
    for(int i = 0; i < m; i++){
        if(n==0)
            break;
        if(containers[i].boxes <= n){
            resul += containers[i].boxes*containers[i].matches;
            n-= containers[i].boxes;
        }
        else{
            resul += n*containers[i].matches;
            n=0;

        }
    }

    cout << resul;

    return 0;

}
