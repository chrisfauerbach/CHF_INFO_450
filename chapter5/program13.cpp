#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    char s1[80];
    char s2[80];
    cout << "Enter two strings: ";
    gets(s1);
    gets(s2); //CHF - The book put them on one line? that's gross.

    cout << "lengths: " << strlen(s1);
    cout << " " << strlen(s2) << "\n";

    if (!strcmp(s1,s2)){
        cout << "The strings are equal.\n";
    }else{
        cout << "The strings are not equal.\n";
    }
    
    strcat(s1, s2);

    cout << s1 << "\n";

    strcpy(s1, s2);
    cout << s1 << " and " << s2 << " ";
    cout << "are now the same\n";

    return 0;
}