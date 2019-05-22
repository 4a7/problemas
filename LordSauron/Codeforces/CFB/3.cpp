#include <bits/stdc++.h>


using namespace std;


int main(){




    vector<int> cities;
    int n, a, criminal;

    cin >> n >> a;

    for(int i =0; i<n; i++){
        cin>>criminal;
        cities.push_back(criminal);
    }


    int resul = 0;
    if(cities[a-1] == 1)
        resul++;
    for(int i = 1; i < n; i++){
        if(a+i <= n && a-i >= 1){
            if(cities[a-i-1] == 1 && cities[a+i-1] == 1)
                resul+=2;
        }
        else if(a+i <= n){
           if(cities[a+i-1] == 1)
                resul++;
        }else if(a-i >= 1){
           if(cities[a-i-1] == 1)
                resul++;
        }
        else{
            break;
        }
    }

    cout << resul;


    return 0;

}
