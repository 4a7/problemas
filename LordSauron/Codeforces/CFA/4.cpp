#include <bits/stdc++.h>

using namespace std;


int main(){


    int p, resul = 0;

    cin >> p;


    int total, temp;
    for(int i = 0; i < p; i++){
        total = 0;

        cin >> temp;
        total+=temp;
        cin >> temp;
        total+=temp;
        cin >> temp;
        total+=temp;

        if(total >= 2)
            resul++;


    }


    cout << resul;

    return 0;

}
