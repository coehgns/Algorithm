#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// query_len은 배열 query의 길이입니다.
int* solution(int arr[], size_t arr_len, int query[], size_t query_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(arr_len * sizeof(int));
    int idx, cnt;
    answer = arr;
    for(int i = 0; i < query_len; i++) {
        if(i % 2 == 0) {
            cnt = 0;
            for(int j = 0; j <= query[i]; j++) {
                arr[j] = answer[j];
                cnt++;
            }
            answer = (int*)malloc(sizeof(int) * cnt);
            for(int j = 0; j < cnt; j++) {
                answer[j] = arr[j];
            }
            idx = cnt;
        }
        else {
            cnt = 0;
            for(int j = query[i]; j < idx; j++) {
                arr[cnt++] = answer[j];
            }
            answer = (int*)malloc(sizeof(int) * cnt);
            for(int j = 0; j < cnt; j++) {
                answer[j] = arr[j];
            }
        }
    }
    return answer;
}