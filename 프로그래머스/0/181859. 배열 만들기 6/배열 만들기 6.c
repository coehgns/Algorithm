#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int i = 0;
    int stk_len = 0;
    int *stk = NULL;
    
    while(i < arr_len) {
        if(stk_len == 0) {
            stk = (int*)realloc(stk,sizeof(int) * (stk_len+1));
            stk[stk_len] = arr[i];
            stk_len++;
            i++;
        }
        else if(stk[stk_len - 1] == arr[i]) {
            stk_len--;
            i++;
        }
        else if(stk[stk_len - 1] != arr[i]) {
            stk = (int*)realloc(stk,sizeof(int) * (stk_len+1));
            stk[stk_len] = arr[i];
            stk_len++;
            i++;
        }
    }
        int* answer = (int*)malloc(sizeof(int) * stk_len);
        for(size_t j = 0; j < stk_len; j++) {
            answer[j] = stk[j];
        }
        if(stk_len == 0) {
            answer[0] = -1;
        }
    return answer;
}