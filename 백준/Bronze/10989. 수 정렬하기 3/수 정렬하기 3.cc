#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int arr[10001] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[a]++;
    }
    
    for (int i = 0; i < 10001; i++)
    {
        for (int j = 0; j < arr[i]; j++)
            cout << i << "\n";
    }
    
}
