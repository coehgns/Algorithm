#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
	cin >> n;
    
    float result = 0;
    float totalUnit = 0;
    float unit;

    string subject, score;
    while(n--) {
        cin >> subject >> unit >> score;
        totalUnit += unit;
        if (score[0] == 'A') {
		    if (score[1] == '+') result += 4.3 * unit;
		    else if (score[1] == '0') result += 4 * unit;
		    else result += 3.7 * unit;
	    }
	    else if (score[0] == 'B') {
		    if (score[1] == '+') result += 3.3 * unit;
		    else if (score[1] == '0') result += 3 * unit;
		    else result += 2.7 * unit;
	    }
	    else if (score[0] == 'C') {
	    	if (score[1] == '+') result += 2.3 * unit;
		    else if (score[1] == '0') result += 2 * unit;
		    else result += 1.7 * unit;
	    }
	    else if (score[0] == 'D') {
		    if (score[1] == '+') result += 1.3 * unit;
		    else if (score[1] == '0') result += 1 * unit;
		    else result += 0.7 * unit;
	    }
    }
	
    cout.precision(2);
    cout << fixed;
    cout << result / totalUnit;

    return 0;
}
