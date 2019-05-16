#include <bits/stdc++.h>

using namespace std;


int main(){



    int a, b, resu = 0;

    cin >> a >> b;

    while(a <= b){
        a = a*3;
        b = b*2;
        resu++;

    }


    cout << resu;


    return 0;

}
