#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// order_len은 배열 order의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* order[], size_t order_len) {
    int answer = 0;
    for(int i = 0; i < order_len; i++) {
        if(strcmp(order[i],"iceamericano")==0 || strcmp(order[i],"americanoice")==0 ||strcmp(order[i],"americanohot")==0 || strcmp(order[i],"hotamericano")==0 || strcmp(order[i],"americano")==0 || strcmp(order[i],"anything")==0) answer+= 4500;
        else if(strcmp(order[i],"cafelatteice")==0||strcmp(order[i],"icecafelatte")==0||strcmp(order[i],"hotcafelatte")==0||strcmp(order[i],"cafelattehot")==0||strcmp(order[i],"cafelatte")==0) answer += 5000;
    }
    return answer;
}