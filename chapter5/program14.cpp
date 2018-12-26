// Convert a string to uppercase
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    char str[80];
    int i;
    strcpy(str, "This is a test.");

    for (i=0;str[i];i++){
        str[i] = toupper(str[i]);
    }
    cout << str << "\n";
    return 0;
}