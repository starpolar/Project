#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int sideLength = pow(2, n) + 1;  // �� ���� �ִ� ���� ��
    int totalPoints = sideLength * sideLength;  // ��ü ���� ��

    printf("%d\n", totalPoints);

    return 0;
}
