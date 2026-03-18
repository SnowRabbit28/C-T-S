#include <iostream>
#include <vector>
#include <algorithm> // max 함수 사용을 위해 필요
#include <iomanip>   // fixed, setprecision 사용을 위해 필요

using namespace std;

int main() {
    // 1. 입력 속도 향상
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    double sum = 0;   // 총합을 저장할 변수 (정밀도를 위해 double)
    double max_val = 0; // 최댓값을 저장할 변수

    for (int i = 0; i < n; i++) {
        double score;
        cin >> score;
        
        sum += score; // 일단 모든 점수를 더함
        if (score > max_val) {
            max_val = score; // 최댓값 업데이트
        }
    }

    // 2. 새로운 평균 계산
    // 공식: (sum / max_val * 100) / n
    double result = (sum / max_val * 100) / n;

    // 3. 출력 형식 지정 (소수점 고정)
    cout << fixed;              // 소수점 아래 자릿수를 고정하겠다
    cout << setprecision(2);    // 소수점 아래 2자리까지 출력하겠다 (반올림 포함)
    
    cout << result << "\n";

    return 0;
}