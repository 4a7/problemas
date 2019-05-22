#include <bits/stdc++.h>


using namespace std;


int main(){

    int tam;
    string a;


    cin >> tam >> a;

        for(int i = tam-1; i >= 2 || i >=3; i-=2){
            cout << a[i-1];
        }
        cout << a[0];
        int x = 2;
        if(tam%2!=0)
            x++;
        for(x; x <= tam; x+=2){
            cout << a[x-1];
        }



}
