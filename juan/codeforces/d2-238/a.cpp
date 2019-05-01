#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int largo;
vector<int>nums;
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>largo;
    while(largo--){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size();i++){
        if(i!=0)cout<<" ";
        cout<<nums[i];
    }
    cout<<endl;
    return 0;
}
