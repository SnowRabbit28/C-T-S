#include <bits/stdc++.h>
using namespace std;

int arr[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c; cin >> a >> b >> c;

    string abc = to_string(a * b * c);

    for (char c : abc)arr[c - '0']++;
    for (int i = 0; i < 10; i++) cout << arr[i] << "\n";

}