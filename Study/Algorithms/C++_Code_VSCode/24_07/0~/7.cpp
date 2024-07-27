#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    // ī�� ������ �ּ� ���� �ֱ�
    for (int i = 0; i < n; ++i) {
        int card;
        cin >> card;
        minHeap.push(card);
    }

    int totalCost = 0;

    // ī�� ������ ��ġ�� ����
    while (minHeap.size() > 1) {
        // ���� ���� �� ī�� ���� ������
        int first = minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();

        // �� ī�� ������ ��ģ ��� ���
        int cost = first + second;
        totalCost += cost;

        // ��ģ ī�� ������ �ٽ� �ּ� ���� �ֱ�
        minHeap.push(cost);
    }

    cout << totalCost << endl;

    return 0;
}
