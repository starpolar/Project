// 8393 ��
// �ݺ���
#include <cstdio>

int main() {
    int n, result = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result += i;
    }
    printf("%d", result);

    return 0;
}
/* �־��� ���������� ���� ���ϴ� ���� ����
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int sum = n * (n + 1) / 2;
    std::cout << sum << std::endl;
    return 0;
}
 */