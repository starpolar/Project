#include <stdio.h>
// ���Ʈ ���� / 9.26
int main() {//1018	ü���� �ٽ� ĥ�ϱ�

	// 2���� �迭�� ������ �����ϰ�
	// 2���� �迭�� ������� 8x8�� �߶� �����ϴµ�,
	// ó�� ���� B�϶� �������� W���� Ȯ���ϰ�
	// x�� 2 �̻��̰� y�� 1�϶� x-1(����)�� ���� �ٸ��� Ȯ���ϰ� cnt++(�ٽ� ĥ ����)
	// �������� resCnt(�ٽ� ĥ�� �ּڰ�)���� cnt�� ���� ������ resCnt = cnt
	// ������ resCnt ������ cnt�� ���� Ŀ���� break
	// �׷� resCnt ���� �ִ�ġ�� 64�� �ʱ�ȭ�ϰ�, ���� �������� resCnt�� ���.

	int n, m;
	scanf("%d %d", &n, &m);
	char arr[51][51] = { 0 };

	for (int i = 0; i < n; i++) {
		char x[50] = { 0 };
		scanf("%s", &x);

		for (int j = 0; j < m; j++) {
			arr[i][j] = x[j];
		}
	}

	int x = 0, y = 0, cnt, resCnt = 64;
	for (int i = x; i <= n-8; i++) {
		for (int j = y; j <= m-8; j++) {

			char startCh[2] = { 0 }, nextCh[2] = { 0 };
			cnt = 0;
			for (int xi = i; xi < i + 8; xi++) {
				for (int yj = j; yj < j + 8; yj++) {
					if (startCh[0] == 0) {
						startCh[0] = arr[xi][yj];
					}
					else if (yj == j && xi != i && startCh[0] == arr[xi - 1][j]) {
						cnt++;
						if (startCh[0] == 'B') startCh[0] = 'W';
						else if (startCh[0] == 'W') startCh[0] = 'B';
						continue;
					}

					nextCh[0] = arr[xi][yj + 1];
					if (startCh[0] == nextCh[0]) {
						cnt++;
						if (nextCh[0] == 'B') startCh[0] = 'W';
						else if (nextCh[0] == 'W') startCh[0] = 'B';
					}
					else if (nextCh[0] != 0) startCh[0] = nextCh[0];
				}
			}

			if (resCnt > cnt) resCnt = cnt;
			y++;
		}
		x++;
	}

	printf("%d", resCnt);
	
	/*if (1) {
		printf("debug");
	}*/

	return 0;
}