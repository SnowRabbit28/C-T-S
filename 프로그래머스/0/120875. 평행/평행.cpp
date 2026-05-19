#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    double xnum1 = dots[0][0] - dots[1][0];
    double ynum1 = dots[0][1] - dots[1][1];
    double gi1 = ynum1 / xnum1;
    
    double xnum2 = dots[2][0] - dots[3][0];
    double ynum2 = dots[2][1] - dots[3][1];
    double gi2 = ynum2 / xnum2;
    
    if (gi1 == gi2 ) return 1;
    
    double xnum3 = dots[0][0] - dots[2][0];
    double ynum3 = dots[0][1] - dots[2][1];
    double gi3 = ynum3 / xnum3;
    
    double xnum4 = dots[1][0] - dots[3][0];
    double ynum4 = dots[1][1] - dots[3][1];
    double gi4 = ynum4 / xnum4;
    
    if (gi3 == gi4 ) return 1;
    
    double xnum5 = dots[0][0] - dots[3][0];
    double ynum5 = dots[0][1] - dots[3][1];
    double gi5 = ynum5 / xnum5;
    
    double xnum6 = dots[1][0] - dots[2][0];
    double ynum6 = dots[1][1] - dots[2][1];
    double gi6 = ynum6 / xnum6;
    
    if (gi5 == gi6 ) return 1;
    return answer;
}