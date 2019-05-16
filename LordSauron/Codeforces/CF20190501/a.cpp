#include <bits/stdc++.h>

using namespace std;




vector<int> figures;



int main(){




    int n;

    int resul = 0;
    cin >> n;


    int temp;
    int last;
    cin >> last;
    figures.push_back(last);
    bool ok = true;

    for(int i = 1; i < n; i++){
        cin >> temp;

        figures.push_back(temp);


        if((figures[i]+figures[i-1]) >= 5){
            ok = false;
        }
        else{
            if(i > 1){
                if(figures[i-2] == 3 && figures[i-1] == 1 && figures[i] == 2){

                    resul += (last+temp)-1;
                }
                else{

                    resul += (last+temp);
                }

            }
            else{

            resul += (last+temp);
            }
        }

        last = temp;

    }

    if(ok){
        cout << "Finite\n" << resul;
    }else
    {
        cout << "Infinite";
    }



    return 0;

}
