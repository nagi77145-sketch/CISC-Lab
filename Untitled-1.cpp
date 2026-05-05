#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n - 1;

    while (!(n % m == 0)) {
        m -= 1;
    }

    printf("%d", m);
    return 0;
}