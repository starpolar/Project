#include <stdio.h>
#include <string.h>

int main() { // 2675	���ڿ� �ݺ� / ���ڿ�
	int cnt = 0;
	char s[1000001] = { 0 };
	scanf("%s", &s); // ���� fgets ��. �ٵ� ����� ���Ŀ� stdin? ������ FILE stream.
	int length = strlen(s) - 1;
	for (int i = 0; i < length; i++) {
		if (s[0] == ' ' || s[length] == ' ') {
			cnt--;
		}
		else if (s[i] == ' ') {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}