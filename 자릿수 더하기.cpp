//자릿수 더하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n);
int main(void)
{
	int answer, n;
	scanf("%d", &n);

	answer = solution(n);
	return answer;
}
int solution(int n) {
	int answer = 0;
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		answer += (n % 10);
		n = n / 10;
	}
	printf("%d", answer);
	return answer;
}