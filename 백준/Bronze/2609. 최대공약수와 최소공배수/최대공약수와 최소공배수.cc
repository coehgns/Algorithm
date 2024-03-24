#include <stdio.h> 
#include <string.h>

// 최대공약수
int gcd(int a, int b) {
    int gcdV;
    for (int i = 1; i <= a && i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
            gcdV = i;
    }
    return gcdV;
}
// 최소공배수
int lcm(int a, int b) {
    return  (a * b) / gcd(a, b);
}


int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);

    printf("%d %d", gcd(num1, num2), lcm(num1, num2));

	return 0;
}