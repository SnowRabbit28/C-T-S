#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int xx = x;
    int a = 0;
    while(xx > 0){
        a += xx % 10;
        xx /= 10;
    }
    return x % a == 0 ? 1 : 0;
}