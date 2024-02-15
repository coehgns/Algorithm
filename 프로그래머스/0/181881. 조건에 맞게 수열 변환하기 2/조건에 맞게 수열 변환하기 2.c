#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int answer = 0;
    int arr1[arr_len];
    while(1) {
        
        int s = 0;
        
        for(int i = 0; i < arr_len; i++) {
            if(arr[i] >= 50 && arr[i] % 2 == 0) {    // 50보다 크거나 같은 짝수  = 2로 나눔
                arr[i] /= 2;
                s = 1;
            }
            else if(arr[i] < 50 && arr[i] % 2 == 1) {   // 50보다 작은 홀수 = 2를 곱한뒤 더하기 1
                arr[i] = (arr[i] * 2) + 1;
                s = 1;
            }
          }
        if(s == 0) {
            break;
        }
        answer += 1;
      }
    return answer;
}