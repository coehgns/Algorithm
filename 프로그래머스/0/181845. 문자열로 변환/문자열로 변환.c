#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(n * 10000);
    int cnt = 0, dig = 1, tmp = n;
    while(tmp) {
        tmp/=10;
        cnt++;
    }
    for(int i = 1; i < cnt; i++) {
        dig *= 10;
    }
    for(int i = 0; i < cnt; i++) {
        answer[i] = (n/dig + '0');
        n %= dig;
        dig /= 10;
    }
    answer[cnt] = '\0';
    return answer;
}