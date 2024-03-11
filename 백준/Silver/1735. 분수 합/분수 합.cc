#include <stdio.h> 

int main() {
	int num1, divisor2, num3, divisor4;

	scanf("%d %d %d %d", &num1, &divisor2, &num3, &divisor4);

	int divisor = divisor2 * divisor4;
	int a = divisor2 * num3 + divisor4 * num1;
	int cnt = 2;
	
	while(cnt <= a && cnt <= divisor) {
	    if(a % cnt != 0 || divisor % cnt !=0) {
	        cnt++;
	    }
	    else {
	        a /= cnt;
	        divisor /= cnt;
	    }
	}
	
	printf("%d %d", a, divisor);
}