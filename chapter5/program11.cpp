#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    char str[80];

    cout << "Enter a string: ";

    gets(str);

    cout << "Length is: " << strlen(str) << "\n";

    return 0;
    
}