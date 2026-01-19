#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n && n != -1) {
        vector<int> v;
        int sum = 0;

        // 1. 자기 자신(n)을 제외한 모든 약수 찾기
        for (int i = 1; i < n; i++) { // i * i가 아니라 i < n 입니다!
            if (n % i == 0) {
                v.push_back(i);
                sum += i;
            }
        }

        // 2. 판별 및 출력
        if (sum == n) {
            cout << n << " = ";
            for (int i = 0; i < v.size(); i++) {
                cout << v[i];
                if (i != v.size() - 1) cout << " + ";
            }
            cout << "\n"; // 이 줄바꿈이 꼭 있어야 해요!
        } else {
            // "is NOT perfect." 앞에 공백 하나, 마침표(.) 뒤에 \n 확인!
            cout << n << " is NOT perfect.\n";
        }
    }
    return 0;
}