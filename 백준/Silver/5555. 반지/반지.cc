#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string str;
  string ring;
  cin >> str;
  cin >> n;

  int cnt = 0;
  for(int i = 0; i < n; i++) {
    cin >> ring;
    ring += ring;
    if(ring.find(str) != string::npos) {
      cnt++;
    }
  }
  cout << cnt;

  return 0;
}