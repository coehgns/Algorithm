#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(arr_len * sizeof(int));
    for(int i = 0; i < arr_len; i++) {
        if(arr_len % 2 == 0) {  // arr길이가 짝수 일 때
            if(i % 2 == 1) {  // arr길이는 짝수이고 인덱스가 홀수 일 때
                answer[i] = arr[i] + n;
            }
            else {
                answer[i] = arr[i];
            }
        }
        if(arr_len % 2 == 1) {  // arr길이가 홀수 일 때
            if(i % 2 == 0) {  // arr길이는 홀수이고 인덱스가 짝수 일 때
                answer[i] = arr[i] + n;
            }
            else {
                answer[i] = arr[i];
            }
        }
    }
    return answer;
}