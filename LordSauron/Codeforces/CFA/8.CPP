#include <bits/stdc++.h>


using namespace std;


int main(){


    set<char> chars;

    string username;

    cin >> username;

    int total = 0;
    int siz = username.size();
    for(int i = 0; i < siz; i++){
        if(chars.count(username[i]) <= 0){
            total++;
            chars.insert(username[i]);
        }
    }


    if(total%2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }


    return 0;
}
