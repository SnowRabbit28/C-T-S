#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    bool a[26];
    bool checker = false;
    int answer = 0;
    while(n--){
        string group;
        cin >> group;
        
        for(int i=0; i<26; i++) a[i] = true;
        checker = false;
        
        for(int i=1; i<group.size(); i++){
            if(a[group[i]-'a']){
                if(group[i-1]!=group[i]){
                    a[group[i-1]-'a'] = false;
                }
            }else{
                checker = true;
                break;
            }
        }
        
        if(!checker) answer++;
    }
    
    cout << answer;
}