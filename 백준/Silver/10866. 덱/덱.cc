#include <iostream>
#include <deque>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  string str;
  deque<int> dq;
  cin >> n;

  int input;
  while(n--) {
    cin >> str;

    if(str == "push_front") {
      cin >> input;
      dq.push_front(input);
    }
    if(str == "push_back") {
      cin >> input;
      dq.push_back(input);
    }
    if(str == "pop_front") {
      if(dq.empty()) cout << -1 << "\n";
      else {
        cout << dq.front() << "\n";
        dq.pop_front();
      }
    }
    if(str == "pop_back") {
      if(dq.empty()) cout << -1 << "\n";
      else {
        cout << dq.back() << "\n";
        dq.pop_back();
      }
    }
    if(str == "size") {
      cout << dq.size() << "\n";
    }
    if(str == "empty") {
      if(dq.empty()) cout << 1 << "\n";
      else cout << 0 << "\n";
    }
    if(str == "front") {
      if(dq.empty()) cout << -1 << "\n";
      else cout << dq.front() << "\n";
    }
    if(str == "back") {
      if(dq.empty()) cout << -1 << "\n";
      else cout << dq.back() << "\n";
    }
  }

  return 0;
}