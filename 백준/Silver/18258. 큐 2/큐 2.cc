#include <stdio.h>
#include <string.h>

int queue[2000001] = { 0, };
int v_front = 0;
int v_rear = 0;

void push(int n) {
	queue[v_rear++] = n;
}

int empty() {
	return v_front == v_rear;
}

int pop() {
    	return empty() ? -1 : queue[v_front++];
}

int size() {
	return v_rear - v_front;
}

int front() {
	return empty() ? -1 : queue[v_front];
}

int back() {
	return empty() ? -1 : queue[v_rear-1];
}

int main() {
	int n;
	int input;
	char str[6];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", str);

		if (!strcmp(str, "push")) {
			scanf("%d", &input);
			push(input);
		}
		else if (!strcmp(str, "pop")) {
			printf("%d\n", pop());
		}
		else if (!strcmp(str, "size")) {
			printf("%d\n", size());
		}
		else if (!strcmp(str, "empty")) {
			printf("%d\n", empty());
		}
		else if (!strcmp(str, "front")) {
			printf("%d\n", front());
		}
		else {
			printf("%d\n", back());
		}
	}

	return 0;
}