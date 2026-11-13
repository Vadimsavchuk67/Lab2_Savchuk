#include <iostream>
using namespace std;
int main() {
    double a, b, result = 0;
    int op;
    cout << "First number: ";
    if (!(cin >> a)) return 1;
    cout << "Operation (1 +, 2 -, 3 *, 4 /): ";
    if (!(cin >> op)) return 1;
    cout << "Second number: ";
    if (!(cin >> b)) return 1;
    switch (op) {
        case 1: break;
        case 2: break;
        case 3: result = a * b; break;
        case 4: break;
        default: cout << "Invalid operation"; return 1;
    }
    cout << "Result = " << result << endl;
}
