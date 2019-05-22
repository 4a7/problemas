#include <bits/stdc++.h>

using namespace std;


int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);


    int n;
    scanf("%d",&n);


    char game;
    int a=0, d=0;
    getchar();
    for(int i = 0; i < n; i++){
        scanf("%c",&game);
        if(game=='A')
            a++;
        else
            d++;
    }
    getchar();
    if(a>d){
        cout<<"Anton";
    }
    else if(d>a){
        cout << "Danik";
    }
    else{
        cout <<"Friendship";
    }



    return 0;

}
