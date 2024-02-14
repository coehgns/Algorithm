#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = arr_len;
    while(len & (len -1)) {
        len++;
    }
    int* answer = (int*)malloc(2000 * sizeof(int));
     
    for(int i = 0; i < arr_len; i++) {
        answer[i] = arr[i];
    }
    for(int i = arr_len; i < len; i++) {
        answer[i] = 0;
    }
    return answer;
}