#include <iostream>
using namespace std;

int main() {
    int x, i;
    cout << "write num x (0 < x < 10^9): ";
    cin >> x;
    cout << "wtite num bit i: ";
    cin >> i;

    // Создание битовой маски с i-ым битом установленным в 0
    int mask = ~(1 << i);

    // Установка i-ого бита в 0
    int result = x & mask;

    cout << "num " << x << " c " << i << "i bit in 0: " << result << endl;

    return 0;
}