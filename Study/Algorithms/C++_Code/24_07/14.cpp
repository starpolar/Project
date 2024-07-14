// 2884 �˶� �ð�
// ���ǹ�

#include <cstdio>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);

    if (m - 45 < 0) {
        if (h - 1 < 0) {
            h = 24 - 1;    
        } else {
            h -= 1;
        }        
        int x = 45 - m;
        m = 60 - x;
    } else {
        m -= 45;
    }
    printf("%d %d", h, m);

    return 0;
}
/* 
#include <iostream>

int main() {
    int H, M;
    std::cin >> H >> M;

    // 45�� ���� ����
    M -= 45;
    if (M < 0) {
        M += 60;
        H--;
        if (H < 0) {
            H = 23;
        }
    }

    std::cout << H << " " << M << std::endl;
    return 0;
}
 */
/* todo : �����׽�Ʈ �� ����.
#include <iostream>
#include <chrono>

int main() {
    int H, M;
    std::cin >> H >> M;

    // ���� �ð��� H�� M���� minutes ������ ��ȯ
    std::chrono::minutes current_time = std::chrono::hours(H) + std::chrono::minutes(M);

    // 45�� ���� �˶� ����
    std::chrono::minutes early_alarm = current_time - std::chrono::minutes(45);

    // ���ο� �ð��� �ð��� �� ������ ��ȯ
    int new_H = (early_alarm.count() / 60) % 24;
    int new_M = early_alarm.count() % 60;

    // ���� �ð��� ���� ��� 24�ð� ü��� ��ȯ
    if (new_H < 0) {
        new_H += 24;
    }
    if (new_M < 0) {
        new_M += 60;
    }

    std::cout << new_H << " " << new_M << std::endl;

    return 0;
}
 */