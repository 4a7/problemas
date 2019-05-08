#include <bits/stdc++.h>
#define endl "\n"
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
string s, t;
int minusculas[40];
int mayusculas[40];
int main(){
    cin.tie(0),ios_base::sync_with_stdio(0),cout.tie(0);
    cin>>s>>t;
    for(auto i:t){
        if(i<'a'){
            mayusculas[i-'A']++;
        }
        else{
            minusculas[i-'a']++;
        }
    }
    int yay=0;
    int whoops=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!='.' && s[i]<'a'){
            if(mayusculas[s[i]-'A']>0){
                yay++;
                mayusculas[s[i]-'A']--;
                s[i]='.';
            }
        }
        else if(s[i]!='.' && s[i]>='a'){
            if(minusculas[s[i]-'a']>0){
                yay++;
                minusculas[s[i]-'a']--;
                s[i]='.';
            }
        }
    }
    
    for(int i=0;i<s.size();i++){
        if(s[i]!='.' && s[i]<'a'){
            if(minusculas[s[i]-'A']>0){
                whoops++;
                minusculas[s[i]-'A']--;
                s[i]='.';
            }
        }
        else if(s[i]!='.' && s[i]>='a'){
            if(mayusculas[s[i]-'a']>0){
                whoops++;
                mayusculas[s[i]-'a']--;
                s[i]='.';
            }
        }
    }
    cout<<yay<<" "<<whoops<<endl;
    return 0;
}

