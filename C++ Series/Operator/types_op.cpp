#include <iostream>
using namespace std;
int main()
{

    // 1. Arithmetic Operators...
    int a = 10, b = 5;
    cout << (a + b) << "\n"; // 15
    cout << (a - b) << "\n"; // 5
    cout << (a * b) << "\n"; // 50

    // 2. Assignmenrt Operators...
    int x = 10;
    x += 5;            // x = x + 5
    cout << x << "\n"; // 15

    // 3. Comparison Operators...
    int a = 10;
    int b = 5;
    cout << (a > b) << "\n"; // 1 (true)

    // 4. Logical Operators...
    int p = 10;
    int q = 5;
    cout << (p > 5 && q < 10) << "\n"; // 1 (true)
    cout << (p > 5 || q > 10) << "\n"; // 1 (true)
    cout << !(p < 5) << "\n";          // 1 (true)
}