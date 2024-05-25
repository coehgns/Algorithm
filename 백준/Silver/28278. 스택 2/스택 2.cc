#include <iostream>
#include <stack>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int command, n, input;
  cin >> n;
  stack<int> stack;
  
  while(n--) {
    cin >> command;
    if(command == 1) {
      cin >> input;
      stack.push(input);
    }
    if(command == 2) {
      if(stack.empty()) cout << -1 << "\n";
      else {
        cout << stack.top() << "\n";
        stack.pop();
      }
    }
    if(command == 3) {
      cout << stack.size() << "\n";
    }
    if(command == 4) {
      if(stack.empty()) cout << 1 << "\n";
      else cout << 0 << "\n";
    }
    if(command == 5) {
      if(!(stack.empty())) cout << stack.top() << "\n";
      else cout << -1 << "\n";
    }
  }


  return 0;
}