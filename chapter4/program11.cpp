/*
 This program displays all printable characters, 
  including the extended character set, if one exists.
*/
 #include <iostream>
 using namespace std;

int main()
{
    /*
    unsigned char ch;
    ch = 32;
    */
    // CHF- Let's initialize this bad boy.
    unsigned char ch = 32;
    while(ch) {
        cout << ch << " ";
        ch++;
    }
    return 0;

}
// My IDE is giving me  a red squiggly.  
// No idea why.  Now it's not. WTHeck?