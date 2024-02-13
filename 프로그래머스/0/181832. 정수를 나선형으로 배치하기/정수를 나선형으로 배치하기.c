#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int** answer = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++) {
        answer[i] = (int*)malloc(sizeof(int) * n);
    }
    int left = 0, right = n - 1, top = 0, bottom = n - 1, num = 1;
    while(left <= right && top <= bottom) {
        for(int i = left; i <= right; i++) {
            answer[top][i] = num++;
        }
        top++;
        
        for(int i = top; i <= bottom; i++) {
            answer[i][right] = num++;
        }
        right--;
        
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                answer[bottom][i] = num++;
            }
            bottom--;
        }
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                answer[i][left] = num++;
            }
            left++;
        }
    }
    return answer;
}