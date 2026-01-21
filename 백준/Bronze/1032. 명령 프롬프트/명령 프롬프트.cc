#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 1. 입력
    int N;
    cin >> N;
    string s;
    cin >> s;
    bool name[50];
    fill(name, name + 50, true);

    // 2. 첫번째식과 그 이외의 식을 비교
    for (int i = 1; i < N; i++)
    {
        string ss;
        cin >> ss;

        // 3. bool값으로 글자가 같은지 확인
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] != ss[j])
                name[j] = false;
        }
    }
    // 4. 출력
    for (int i = 0; i < s.size(); i++)
        cout << (name[i] ? s[i] : '?');
}
