//짝수와 홀수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num);
int main(void)
{
	int num;
	char* answer;
	scanf("%d", &num);

	answer = solution(num);
}

char* solution(int num) {
	// 리턴할 값은 메모리를 동적 할당해주세요
	char* answer = (char*)malloc(10);
	if (num % 2 == 0 || num == 0) {
		answer = "Even";
		return answer;
	}
	else if (num % 2 == 1) {
		answer = "Odd";
		return answer;
	}

}