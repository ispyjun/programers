//¦���� Ȧ��

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
	// ������ ���� �޸𸮸� ���� �Ҵ����ּ���
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