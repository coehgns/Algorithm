#include <iostream>
#include <set>
using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
	int n, m, input;
	set<int> s;

	cin >> n;
	while (n--) {

		cin >> input;
		s.insert(input);
	}

	cin >> m;
	while (m--) {

		cin >> input;
		cout << (s.find(input) != s.end()) << "\n";
	}


	return 0;
}