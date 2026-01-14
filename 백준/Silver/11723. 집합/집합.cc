#include <iostream>
#include <string>

using namespace std;

int main() {
    // 입출력 속도 최적화 (필수)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin >> m;

    int s = 0; // 비트 마스크 변수
    string op;
    int x;

    while (m--) {
        cin >> op;

        if (op == "add") {
            cin >> x;
            s |= (1 << x);
        } else if (op == "remove") {
            cin >> x;
            s &= ~(1 << x);
        } else if (op == "check") {
            cin >> x;
            if (s & (1 << x)) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if (op == "toggle") {
            cin >> x;
            s ^= (1 << x);
        } else if (op == "all") {
            s = (1 << 21) - 1;
        } else if (op == "empty") {
            s = 0;
        }
    }

    return 0;
}