#include <iostream>
using namespace std;

struct Node {
    int c, e;
    Node *next;
};

int main() {
    int a[3] = {5, 3, 7};
    int b[3] = {2, 6, 1};

    int sum[3];

    for(int i = 0; i < 3; i++)
        sum[i] = a[i] + b[i];

    cout << "Polynomial Addition:\n";
    cout << sum[0] << "x^4 + "
         << b[1] << "x^3 + "
         << sum[1] << "x^2 + "
         << sum[2];

    return 0;
}
