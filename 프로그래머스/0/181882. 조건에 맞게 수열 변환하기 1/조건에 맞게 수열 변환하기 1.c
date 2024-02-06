#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(arr_len * sizeof(int));
    int num = 0;
    
    for(int i = 0; i < arr_len; i++) {
        num = arr[i];
        if((num > 50 || num == 50) && num % 2 == 0) {
            answer[i] = num / 2;
    }
        else if((num % 2 != 0) && num < 50) {
            answer[i] = num * 2;
        }
        else {
            answer[i] = arr[i];
        }
    }
    return answer;
}