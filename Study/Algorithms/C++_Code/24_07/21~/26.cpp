/* 
2439	�� ��� - 2
�ݺ���
 */

#include <iostream>
using namespace std;

int main() {
    int n;    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k <)

        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}

/* #include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        // ���� ���
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // �� ���
        for(int k = 1; k <= i; k++) {
            cout << "*";
        }
        // �ٹٲ�
        cout << endl;
    }
    
    return 0;
}
 */