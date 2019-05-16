#include <bits/stdc++.h>

using namespace std;

string fact[10] = {"","","2","3","322","5","53","7","7222","7332"};


bool reverseSort(char i, char j){
    return (int)i-'0' > (int)j-'0';
}

int main(){

    int a;
    string n;

    cin >> a >> n;
    string resul = "";
    for(int i = 0; i < a; i++){
        int indx =  (int)n[i]-'0';
        resul += fact[indx];
    }


    sort(resul.begin(), resul.end(), reverseSort);


    cout << resul;













    return 0;
}
