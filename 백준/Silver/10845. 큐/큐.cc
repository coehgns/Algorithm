#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int main() {
  int n, input;
  queue<int> q; 
  cin >> n;

  for(int i = 0; i < n; i++) {
    char str[6] = { 0, };
    cin >> str;

    if(!strcmp(str, "push")) {
      cin >> input;
      q.push(input);
    }
    if(!strcmp(str, "pop")) {
      if(q.empty()) {
        cout << -1 << "\n";
      }
      else {
        cout << q.front() << "\n";
        q.pop();
      }
    }
    if(!strcmp(str, "size")) {
      cout << q.size() << "\n";
    }
    if(!strcmp(str, "empty")) {
      if(q.empty()) {
        cout << 1 << "\n";
      }
      else {
        cout << 0 << "\n";
      }
    }
    if(!strcmp(str, "front")) {
      if(q.empty()) {
        cout << -1 << "\n";
      }
      else {
        cout << q.front() << "\n";
      }
    }
    if(!strcmp(str, "back")) {
      if(q.empty()) {
        cout << -1 << "\n";
      }
      else {
        cout << q.back() << "\n";
      }
    }
  }

  return 0;
}