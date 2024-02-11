#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// flag_len은 배열 flag의 길이입니다.
int* solution(int arr[], size_t arr_len, bool flag[], size_t flag_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int idx = 0;
    int* answer = NULL;
    for(int i = 0; i < arr_len; i++) {
        if(flag[i] == true) {
            answer = realloc(answer,(idx + arr[i] * 2) * sizeof(int));
            for(int j = 0; j < arr[i] * 2; j++) {
                answer[idx++] = arr[i];
            }
        }
        else if(flag[i] == false) {
            answer = realloc(answer, (idx - arr[i]) * sizeof(int));
            idx -= arr[i]; 
        }
    }
    return answer;
}