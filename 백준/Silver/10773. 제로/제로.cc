#include <iostream>
#include <stack>
using namespace std;

int main() {
  int k, input;
  stack<int> stack;
  cin >> k;

  while(k--) {
    cin >> input;
    if(input == 0) {
      if(stack.empty()) continue;
      else stack.pop();
    }
    else stack.push(input);
  }

  int sum = 0;
  while(!(stack.empty())) {
    sum += stack.top();
    stack.pop();
  }
  
  cout << sum;

  return 0;
}