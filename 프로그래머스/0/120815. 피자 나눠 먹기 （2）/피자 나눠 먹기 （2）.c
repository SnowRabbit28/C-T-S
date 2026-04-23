#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = n;
    
    for(int i = 1; i < 100; i++){
        if(answer % 6 ==0)
            return answer/6;
        else
            answer += n;
    }
}