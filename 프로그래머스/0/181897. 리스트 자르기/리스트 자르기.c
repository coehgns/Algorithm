#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// slicer_len은 배열 slicer의 길이입니다.
// num_list_len은 배열 num_list의 길이입니다.
int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int idx = 0;
        if(n == 1) {
            int* answer = (int*)malloc(slicer[1] * sizeof(int));
            for(int j = 0; j <= slicer[1]; j++) {
                answer[idx++] = num_list[j];
            } 
            return answer;
        }
        if(n == 2) {
            int* answer = (int*)malloc((num_list_len - slicer[0] + 1) * sizeof(int));
            for(int j = slicer[0]; j < num_list_len; j++) {
                answer[idx++] = num_list[j];
            }
            return answer;
        }
        if(n == 3) {
            int* answer = (int*)malloc((slicer[1] - slicer[0] +1) * sizeof(int));
            for(int j = slicer[0]; j <= slicer[1]; j++) {
                answer[idx++] = num_list[j];
            }
            return answer;
        }
        if(n == 4) {
            int* answer = (int*)malloc(slicer_len * sizeof(int));
            for(int j = slicer[0]; j <= slicer[1]; j += slicer[2]) {
                answer[idx++] = num_list[j];
            }
            return answer;
        }
}