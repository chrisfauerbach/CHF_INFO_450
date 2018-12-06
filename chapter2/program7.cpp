// A program that demonstrates mul()

#include <iostream>

using namespace std;

void mul(int x, int y); //mul()s prototype
                        //CHF - Mul == Multi Pass? 
                        //      Mul == multiply?

int  real_mul(int x, int y);  //CHF Not in example.
                              // but I want you to learn

int main()
{
    cout << "CHF - Fake , bad mul\n";
    mul(10,20);
    mul(5,6);
    mul(8,9);
    cout << "CHF - Now going to real_mul\n";
    cout << real_mul(4,5) << "\n";
    return 0;
}

//Argh! Again with the super poorly named functions
// if I were making a function called mul, it would
// look like this!
// int mul(int x, int y){ return x*y; }
// Then our MAIN function could decide whether to print it or not.
void mul(int x, int y)
{
    cout << x*y << "\n"; 
}

//CHF so I'll do it here.
int real_mul(int x, int y){
    return x*y;
}
 