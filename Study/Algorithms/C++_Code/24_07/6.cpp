// 11286 ���� ��

#include <cstdio>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

// ����� ���� �� �Լ�
struct compare {
    bool operator()(const int &a, const int &b) {
        if (abs(a) == abs(b)) {
            return a > b; // ������ ������ ���� ���� ���� ���� �켱
        }
        return abs(a) > abs(b); // ������ ���� ���� �켱
    }
};

int main() {
    int N;
    scanf("%d", &N);

    priority_queue<int, vector<int>, compare> pq;

    for (int i = 0; i < N; ++i) {
        int x;
        scanf("%d", &x);
        if (x == 0) {
            if (pq.empty()) {
                printf("0\n");
            } else {
                printf("%d\n", pq.top());
                pq.pop();
            }
        } else {
            pq.push(x);
        }
    }

    return 0;
}