// Enter and display strings.

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    int i;
    const int OUTER = 100;
    const int INNER = 80;

    char text[OUTER][INNER];
    for (t = 0; t < OUTER;t++)
    {
        gets(text[t]);
        if(!text[t][0]) break; // Quit on a blank line.
    }


    //redisplay the strings.
    for (i = 0; i < t;i++)
    { 
        cout << "Line " << i << ": " << text[i] << "\n";
    }

    // CHF - What happens if I iterate the whole outer array? what happens?
    //redisplay the strings.
    /*
    for (i = 0; i < OUTER;i++)
    { 
        cout << "Line " << i << ": " << text[i] << "\n";
    }
    */
    return 0;


}