#include <stdio.h> 
#include <string.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c) {
		printf("%d", a);
	}
	else if (a >= b && a >= c) {  // a가 가장 클 때
		if (b > c) {
			printf("%d", b);
		}
		else if (a == b) {
			printf("%d", a);
		}
		else if (b == c) {   // a != b == c
			printf("%d", b);
		}
		else {
			printf("%d", c);
		}
	}
	else if (b >= a && b >= c) {  // b가 가장 클 때
		if (a > c) {
			printf("%d", a);
		}
		else if (b == a) {
			printf("%d", b);
		}
		else if (a == c) {
			printf("%d", a);  // b != a == c
		}
		else {
			printf("%d", c);
		}
	}
	else {  // c가 가장 클 때
		if (a > b) {
			printf("%d", a);
		}
		else if (c == a) {
			printf("%d", c);
		}
		else if (a == b) {
			printf("%d", a);  // c != a == b
		}
		else {
			printf("%d", b);
		}
	}

	return 0;
}