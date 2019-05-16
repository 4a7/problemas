#include <bits/stdc++.h>

using namespace std;


int main(){

    int n, h;


    cin >> n >> h;


    int ai;

    int resul = 0;
    for(int i = 0; i < n; i++){
        cin >> ai;

        if(ai > h){
            resul = resul + 2;
        }
        else{
            resul++;
        }


    }


    cout << resul;





}
