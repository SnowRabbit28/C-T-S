#include <bits/stdc++.h>
using namespace std;

int n = 4000002;
int target;

int main(void)
{
    //소수구하기
    vector<bool> seive (n,true);
    vector<int> prime;

    for (int i = 2; i * i < n; i++)
    {
        if(!seive[i]) continue;
        for (int j = i*i; j < n; j+=i)
        {
            seive[j] = false;
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (seive[i]) prime.push_back(i);
    }
    prime.push_back(0); // 맨 마지막에 0을 넣어서 이상한 쓰레기값이 들어가는것을 방지. 맨끝에 표시!!
    
    cin >> target;
    int st = 0, ans = 0; int en = 1; int sum = prime[0];
    while (1)
    {
        if(target == sum) ans++;
        if(target >= sum){
            sum += prime[en];
            en++;
        }
        if(target < sum){
            sum -= prime[st];
            st++;
        }
        if(en == int(prime.size())) break;
    }
    cout << ans;
}
