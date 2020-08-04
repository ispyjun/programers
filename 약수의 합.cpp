//약수의 합

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n);
int main(void)
{
	int n, answer;
	scanf("%d", &n);
	answer = solution(n);


}

int solution(int n) {
	int answer = 0;
	int i = 1;

	for (i = 1; i < n; i++)
	{
		if (n%i == 0)
			answer += i;
	}
	answer += n;
	return answer;
}