#include <bits/stdc++.h>

using namespace std;


int main(){




    int numbers,r,c;

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> numbers;
            if(numbers == 1){
                r = i;
                c = j;
            }
        }
    }


    cout << abs(3-r)+abs(3-c);



    return 0;

}
