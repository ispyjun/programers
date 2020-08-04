//두 정수 사이의 합

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b);
int main(void)
{
	int a, b, c, i;
	long long answer;
	scanf("%d %d", &a, &b);

	answer = solution(a, b);
	//printf("%d", answer);
	return answer;
}

long long solution(int a, int b) {
	long long answer = 0;
	int i;
	if (a > 0 || b > 0)
	{
		if (a == b)
		{
			printf("%d", a);
			return a;
		}
		else if (a < b)
		{
			answer = 0;
			for (i = a; i < b; i++)
			{
				answer += i;
			}
			answer += b;
			printf("%d", answer);
			return answer;
		}
		else if (b < a)
		{
			answer = 0;
			for (i = b; i < a; i++)
			{
				answer += i;
			}
			answer += a;
			printf("%d", answer);
			return answer;
		}
	}
	if (a < 0 && b < 0)
	{
		if (a == b)
		{
			printf("%d", a);
			return a;
		}
		else if (a < b)
		{
			answer = 0;
			for (i = a; i < b; i++)
			{
				answer += i;
			}
			answer += b;
			printf("%d", answer);
			return answer;
		}
		else if (b < a)
		{
			answer = 0;
			for (i = b; i < a; i++)
			{
				answer += i;
			}
			answer += a;
			printf("%d", answer);
			return answer;
		}
	}
}