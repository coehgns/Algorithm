#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int pizza_piece = 7;
    
    while(1) {
        if(n <= pizza_piece) {
            break;
        }
        pizza_piece += 7;
    }
    answer = pizza_piece / 7;
    return answer;
}