#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    int B;
    cin >> N >> B;

    long long result = 0;

    for (char c : N) {
        result *= B;

        if ('0' <= c && c <= '9') {
            result += c - '0';
        } else {
            result += c - 'A' + 10;
        }
    }

    cout << result;
    return 0;
}
