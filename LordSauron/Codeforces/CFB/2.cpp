#include <bits/stdc++.h>


using namespace std;


int main(){



    vector<int> garden;
    int num, temp;

    cin>>num;
    for(int i = 0; i < num; i++){
        cin>> temp;
        garden.push_back(temp);
    }


    int resul = 1;
    int last = garden[0];
    bool bajar = false;
    int maxi = 1;
    int pared = 0;
    for(int i = 1; i < num; i++){
        if(garden[i] > garden[i-1]){
                if(bajar){
                    resul = (i+1)-(pared);
                    bajar=false;
                }else{
                    resul++;
                    bajar=true;

                }
        }
        else if (garden[i-1] == garden[i]){
            resul++;
        }
        else{
            bajar = true;
            pared = i;
            resul++;
        }

        maxi = max(maxi, resul);





    }

    cout << maxi;


    return 0;

}
