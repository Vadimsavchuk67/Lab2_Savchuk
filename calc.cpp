#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, result = 0;
    int op;
    cout << "First number: ";
    if (!(cin >> a)) return 1;
    cout << "Operation (1 +, 2 -, 3 *, 4 /, 5 power): ";
    if (!(cin >> op)) return 1;
    cout << "Second number: ";
    if (!(cin >> b)) return 1;
    switch (op) {
        case 1: result = a + b; break;
        case 2: result = a - b; break;
        case 3: result = a * b; break;
        case 4: if (b == 0) { cout << "Cannot divide by zero"; return 1; } result = a / b; break;
        case 5: result = pow(a, b); break;
        default: cout << "Invalid operation"; return 1;
    }
    cout << "Result = " << result << endl;
}
