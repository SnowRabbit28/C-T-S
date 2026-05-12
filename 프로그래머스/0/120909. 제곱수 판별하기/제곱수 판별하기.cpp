#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int num = sqrt(n);
    
    return (num * num == n ? 1 : 2);
}

