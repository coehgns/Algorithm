#include <iostream>
#include <deque>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, command, input;
  deque<int> dq;

  cin >> n; 

  while(n--) {
    cin >> command;
    if(command == 1) {
      cin >> input;
      dq.push_front(input);
    }
    if(command == 2) {
      cin >> input;
      dq.push_back(input);
    }
    if(command == 3) {
      if(dq.empty()) cout << -1 << "\n";
      else {
        cout << dq.front() << "\n";
        dq.pop_front();
      }
    }
    if(command == 4) {
      if(dq.empty()) cout << -1 << "\n";
      else {
        cout << dq.back() << "\n";
        dq.pop_back();
      }
    }
    if(command == 5) {
      cout << dq.size() << "\n";
    }
    if(command == 6) {
      if(dq.empty()) cout << 1 << "\n";
      else cout << 0 << "\n";
    }
    if(command == 7) {
      if(dq.empty()) cout << -1 << "\n";
      else cout << dq.front() << "\n";
    }
    if(command == 8) {
      if(dq.empty()) cout << -1 << "\n";
      else cout << dq.back() << "\n";
    }
  }

  return 0;
}