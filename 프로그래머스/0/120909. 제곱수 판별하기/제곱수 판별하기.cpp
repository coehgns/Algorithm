#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int value = sqrt(n);
    
    if(value * value == n) return 1;
    else return 2;
}