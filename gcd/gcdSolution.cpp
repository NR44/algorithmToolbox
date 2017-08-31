#include <iostream>

using namespace std;

 int gcd(int a, int b) {
        if (b == 0) {
            return a;
        } else {
            gcd (b, a%b);
        }
    }

int main()
{
    int a, b;
    
    cout << "What is the first number? ";
    cin >> a;
    cout << "What is the second number? ";
    cin >> b;

cout << "\n" << "GCD = " << gcd (a,b) << "\n";
    return 0;
}
