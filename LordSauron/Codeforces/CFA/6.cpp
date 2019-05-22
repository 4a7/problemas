#include <bits/stdc++.h>


using namespace std;


int main(){

    int cols,boxes;
    cin >> cols;
    vector<int> box;
    for(int i = 0; i < cols ;i++){
        cin >> boxes;
        box.push_back(boxes);
    }
    sort(box.begin(), box.end());

    for(int i = 0; i < cols;i++){
        cout << box[i];
        if(i!=cols-1)
            cout << " ";
    }



    return 0;
}
