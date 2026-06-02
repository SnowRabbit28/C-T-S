#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int big = hp / 5;
    int middle = (hp % 5) / 3;
    int small = (hp % 5) % 3;
    return big + middle + small;
}