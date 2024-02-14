#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * arr_len);

    for(int i = 0; i < k; i++)
        answer[i] = -1;

    int idx = 0;


    for(int i = 0; i < arr_len; i++)
    {
        int flag = 0;

        for(int j = 0; j < k; j++)
        {
            if(arr[i] == answer[j])
                flag++;
        }
        if(flag == 0)
            answer[idx++] = arr[i];

    }

    return answer;
}