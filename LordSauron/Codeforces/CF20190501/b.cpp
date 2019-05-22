#include <bits/stdc++.h>

using namespace std;


map<char, int> occurrences;


string resul(string s, int start){
    char actual = s[start];
    string resul = "";
    resul+=actual;
    s.erase(start,1);
    int tam = s.size();
    bool ans;
    while(tam > 0){
        ans = false;

        for(int i = 0; i < tam; i++){
            if(actual != s[i]-1 && actual != s[i]+1){
                actual = s[i];
                resul += actual;
                s.erase(i,1);
                tam--;
                ans = true;
                break;
            }
        }

        if(!ans){
            string x = "No answer";
            return x;
        }

    }


    return resul;

}

string newstring(string actual){
    int tam = actual.size();
    string resul = "";
    for(int i = 0; i < tam; i++){
        if(occurrences.count(actual[i]) > 0){
            occurrences[actual[i]]++;
        }
        else{
            resul += actual[i];
            occurrences[actual[i]] = 1;

        }
    }

    return resul;
}


int main(){

    int t;
    cin >> t;

    string word;
    int indx = 0;
    for(int i = 0; i < t; i++){
        cin >> word;
        occurrences.clear();

        string  test = newstring(word);


        indx = 0;
        int s = test.size();
        string res = resul(test, indx);
        while(res.compare("No answer") == 0 && indx < s){

            res = resul(test, indx);
            indx++;

        }


         string finalres;
        if(res.compare("No answer") != 0){
            finalres = "";
            int resN = res.size();
            for(int j = 0; j < resN; j++){
                int tot = occurrences[res[j]];
                for(int k = 0; k < tot; k++){
                    finalres += res[j];
                }
            }

        }
        else{
             finalres = "No answer";
        }


        if(s == 1){
            cout << word << "\n";
        }
        else{
            cout << finalres << "\n";
        }

    }




    return 0;
}
