#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int sum = 0;
    if( n % 2 != 0) {
        for(int i = 0; i<= n; i++) {
            if(i % 2 != 0) {
                sum += i;
            }
        }
    }
    if(n % 2 == 0) {
        for(int i = 0; i<= n; i++) {
            if(i % 2 == 0) {
                double j = pow(i,2);
                sum += j;
            }
        }
    }
    return sum;
}