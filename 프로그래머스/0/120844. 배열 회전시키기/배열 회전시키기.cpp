#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    if(direction == "right"){
        int n = numbers.back();
        numbers.pop_back();
        numbers.insert(numbers.begin(),n);
    }
    else{
        int n = numbers.front();
        numbers.push_back(n);
        numbers.erase(numbers.begin());
    }
    return numbers;
}
