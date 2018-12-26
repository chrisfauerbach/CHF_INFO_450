#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20];
    char s2[10];

    strcpy(s1, "hello");
    strcpy(s2, " there");

    strcat(s1, s2);
    cout << s1;
    cout << "\n";
}