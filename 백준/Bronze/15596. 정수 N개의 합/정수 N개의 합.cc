#include <vector>
using namespace std;

long long sum(vector<int> &a) {
    long long ans = 0;
    for (int x : a) ans += x;
    return ans;
}
