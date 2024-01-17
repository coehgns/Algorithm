#include <stdio.h>
#include <string.h>

int stack[10001];
int stack_size = 0;

void push(int data) {
  stack[stack_size] = data;
  stack_size += 1;
}

int pop() {
  if (stack_size == 0)
    return -1;
  stack_size -= 1;
  return stack[stack_size];
}

int size() {
  return stack_size;
}

int empty() {
  if (stack_size == 0)
    return 1;
  return 0;
}

int top() {
  if (stack_size == 0)
    return -1;
  return stack[stack_size - 1];
}


int main() {
  int N;
  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {
    char j[10] = { 0, };
    scanf("%s", j);

    if (strcmp(j, "push") == 0) {
      int num;
      scanf(" %d", &num);
      push(num);
    }
    if (strcmp(j, "pop") == 0) {
      int a = pop();
      printf("%d\n", a);
    }
    if (strcmp(j, "size") == 0) {
      int b = size();
      printf("%d\n", b);
    }
    if (strcmp(j, "empty") == 0) {
      int b = empty();
      printf("%d\n", b);
    }
    if (strcmp(j, "top") == 0) {
      int b = top();
      printf("%d\n", b);
    }
  }
}