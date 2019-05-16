#include <bits/stdc++.h>


using namespace std;

int main(){


    int n;
    string s;

    cin >> n >> s;

    int resul;

    if(s[0] == '+'){
        resul = 0;

    }
    else{
        resul = 1;
    }
    for(int i = 0; i < n; i++){
        if(s[i] == '+'){
            resul++;

        }
        else{
            if(resul!=0)
                resul--;
        }

    }


    cout << resul;






    return 0;
}
