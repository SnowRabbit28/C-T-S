#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> sosu(n+1,true);
    for(int i = 2; i * i <= n; i++){
        if(sosu[i]){
            for(int j = i * i; j <= n; j += i)
                sosu[j] = false;
        }
    }
    for(int i = 4; i <= n; i++)
        if(!sosu[i]) answer++;
    
    return answer;
}

