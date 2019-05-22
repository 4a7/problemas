#include <bits/stdc++.h>


using namespace std;



int main(){


    int cases,n;
    string s;

    cin >> cases;
    while(cases--){
        cin >> n >> s;

        int i = 0;
        for(i; i < s.size();i++){
            if(s[i] == '8'){
                break;
            }
        }

        if(s.size()-i >= 11){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }


}
