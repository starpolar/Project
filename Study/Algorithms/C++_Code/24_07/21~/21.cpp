// 25314	�ڵ��� ü������ �Դϴ�
// �ݺ���

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = N / 4;  // N�� 4�� ���� ���� "long"�� �ݺ� Ƚ��
    for (int i = 0; i < count; ++i) {
        cout << "long ";
    }
    cout << "int" << endl;

    return 0;
}

/* 
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    string total;
    n = n / 4;
    printf("a %s", total);
    for (int i = 0; i < n; i++) {
        total = total + "long ";
        printf("b %s %d\n", total, i);
    }
    printf("%sint", total);

    return 0;
}
 */