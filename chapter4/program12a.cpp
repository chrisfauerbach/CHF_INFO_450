/*
  Page 72 has a little while loop that's cool
  I wanted to put it in code.
    $ c++ program12a.cpp && time ./a.out
*/
#include <iostream> 
using namespace std;

int main()
{
    int x;
    
    while (100 != (x = rand()) )
    {
       // cout << x << "\n";

    }
    cout << "It finally hit 100!";
}
