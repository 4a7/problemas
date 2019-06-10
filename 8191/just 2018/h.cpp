#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<pair<int, pair<int, int>>> elementos;
int casos,m,n;




int palindrome(string s){
    int l = s.size();
    int j = l - 1;
    int total = 0;
    for(int i = 0; i < l; i++){
       
        if(i >= j)
            break;
        
        if(s[i] != s[j])
            total++;
        
        j--;
    
    }
    return total;
}

int main(){
    cin.tie(0);
	cout.tie(0);	
	std::ios::sync_with_stdio(false);	
    cin>>casos;
    
    while(casos--){
        cin >> m >> n;
        string str;
        cin >> str;
        
        int dif = palindrome(str);
        
        int pos;
        char letra;
        int resul = 0;
        
        int fin = str.size()-1;
        
        while(n--){
        
            cin >> pos >> letra;      
            pos--;      
            
            int distintas = (str[pos] != str[fin-pos]) ? 1 : 0;
            
            str[pos] = letra;
            
            if(str[pos] == str[fin-pos] && distintas == 1){
                dif--;        
            }else if(str[pos] != str[fin-pos] && distintas == 0){
                dif++;        
            }
            
            
            if(!dif){ // dif == 0
                resul++;
            }
                                    
        }
    
        cout << resul << "\n";
    }
    
    return 0;
}
