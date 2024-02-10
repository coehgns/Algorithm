#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer1 = 0;
    int answer2 = 0;
    for(int i = 0; i < num_list_len; i++) {
        if(i % 2 == 0) {     // 원소가 짝수일 때
            answer1 += num_list[i];
        }
        else if(i % 2 == 1) {   // 원소가 홀수일 때
            answer2 += num_list[i];
        }
    }
    if(answer1 > answer2) return answer1;
    else if(answer1 < answer2) return answer2;
}