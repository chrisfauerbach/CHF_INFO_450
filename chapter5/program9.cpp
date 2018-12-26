#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

bool password(); // Defining a function called password

int main(){
    if(password()) cout << "Logged on.\n";
    else cout << "Access denied.\n";

    return 0;
}

// Return true if password accepted; false otherwise.
// CHF =  This is a VERY insecure way of doing passwords.
//        ... even beyond the hardcoded password.
// CHF - If you're curious what's better, let's chat about it.

bool password(){
    char s[80];

    cout << "Enter password: ";
    gets(s);

    //CHF -  strcmp returns 0 for match
    if (strcmp(s, "password")){
        cout << "Invalid password.\n";
        return false;
    }
    //strings compared the same
    return true;
}