// This program demonstrates the xor() function
#include <iostream>
using namespace std;

bool vcu_xor(bool a, bool b);

int main()
{
    bool p, q;
    cout << "Enter P (0 || 1): ";
    cin >> p;
    cout << "Enter Q (0 || 1): ";
    cin >> q;

    cout << "P && Q: " << (p&&q) << "\n";
    cout << "P || Q: " << (p||q) << "\n";
    cout << "P xor Q: "<< vcu_xor(p, q) << "\n";

    return 0;
}

bool vcu_xor(bool a, bool b)
{
    return (a || b) && !(a&&b);
}
