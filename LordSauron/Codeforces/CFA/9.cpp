#include <bits/stdc++.h>


using namespace std;


int main(){


    string a;

    cin >> a;
    int aSize = a.size();
    int lower = 0, upper = 0;
    for(int i = 0; i < aSize; i++){
        if(::isupper(a[i]))
            upper++;
        else
            lower++;

    }

    if(upper > lower)
        transform(a.begin(), a.end(), a.begin(), ::toupper);
    else
        transform(a.begin(), a.end(), a.begin(), ::tolower);

    cout << a;


    return 0;
}
