//2016년

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b);
int main(void)
{
	int a, b;
	char *answer;

	scanf("%d %d", &a, &b);
	answer = solution(a, b);
	printf("%s", answer);
}
char* solution(int a, int b) {
	// 리턴할 값은 메모리를 동적 할당해주세요.
	int all = 0;
	char* answer = (char*)malloc(10);
	if (a == 2) {
		all = 31 + b;
	}
	else if (a == 3) {
		all = 31 + 29 + b;
	}
	else if (a == 4) {
		all = 31 + 29 + 31 + b;
	}
	else if (a == 5) {
		all = 31 + 29 + 31 + 30 + b;
	}
	else if (a == 6) {
		all = 31 + 29 + 31 + 30 + 31 + b;
	}
	else if (a == 7) {
		all = 31 + 29 + 31 + 30 + 31 + 30 + b;
	}
	else if (a == 8) {
		all = 31 + 29 + 31 + 30 + 31 + 30 + 31 + b;
	}
	else if (a == 9) {
		all = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + b;
	}
	else if (a == 10) {
		all = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + b;
	}
	else if (a == 11) {
		all = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + b;
	}
	else if (a == 12) {
		all = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + b;
	}
	else if (a == 1) {
		all = b;
	}

	if (all % 7 == 1) {
		answer = "FRI";
		return answer;
	}
	else if (all % 7 == 2) {
		answer = "SAT";
		return answer;
	}
	else if (all % 7 == 3) {
		answer = "SUN";
		return answer;
	}
	else if (all % 7 == 4) {
		answer = "MON";
		return answer;
	}
	else if (all % 7 == 5) {
		answer = "TUE";
		return answer;
	}
	else if (all % 7 == 6) {
		answer = "WED";
		return answer;
	}
	else if (all % 7 == 0) {
		answer = "THU";
		return answer;
	}
	return answer;
}