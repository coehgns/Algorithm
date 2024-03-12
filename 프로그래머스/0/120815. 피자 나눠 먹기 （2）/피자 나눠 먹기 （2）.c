#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int pizza = 6;
    
    while(1) {
        if(pizza % n == 0) {
            break;
        }
        pizza += 6;
    }
    answer = pizza / 6;
    return answer;
}