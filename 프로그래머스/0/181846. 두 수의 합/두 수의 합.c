#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    int ansidx = 0;
    int tmp = 0;
    char* answer;

    if(len_a >= len_b) answer = (char*)malloc(len_a + 2);
    else answer = (char*)malloc(len_b + 2);
    while(1)
    {
        len_a--;
        len_b--;
        if(len_a < 0 && len_b < 0) break;

        if(len_a >= 0) tmp += a[len_a] - '0';
        if(len_b >= 0) tmp += b[len_b] - '0';

        answer[ansidx++] = tmp % 10 + '0';
        tmp /= 10;
    }
    if(tmp) answer[ansidx++] = tmp + '0';

    answer[ansidx] = '\0';
    len_a = 0;
    len_b = strlen(answer) - 1;

    while(len_a < len_b)
    {
        tmp = answer[len_a];
        answer[len_a] = answer[len_b];
        answer[len_b] = tmp;

        len_a++;
        len_b--;
    }

    return answer;
}