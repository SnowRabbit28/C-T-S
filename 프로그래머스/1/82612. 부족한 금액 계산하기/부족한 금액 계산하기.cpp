#include <bits/stdc++.h>
using namespace std;

long long solution(int price, int money, int count)
{
    long long num = 0;
    for(int i = 1; i <= count; i++)
        num += price * i;
    return money - num < 0 ? abs(money - num) : 0;
}