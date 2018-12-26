//Print a string backwards.
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    char str[80];
    int i;

    cout << "Enter a string: ";
    gets(str);

    //Print the string in reverse
    for (i=strlen(str)-1; i>=0; i--){
        cout << str[i];
    }
    cout << "\n";
    return 0;
}

