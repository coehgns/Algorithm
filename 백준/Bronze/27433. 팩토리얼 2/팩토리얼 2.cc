#include <stdio.h>

int main() {
    long n;
    scanf("%ld", &n);
    long multi = 1;

    for(int i = 1; i <= n; i++) {
        multi *= i;
    }

    printf("%ld", multi);
    
    return 0;
}