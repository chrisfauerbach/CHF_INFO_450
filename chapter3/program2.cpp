#include <iostream>
using namespace std;

void func1();
void func2();

int rams_count;  // This is a global variable.
            //Bonus:  Is it truly global? or file scope? 
            //        namespace scope?  How do we tell?
            //  What is the value of an int that's not 
            // explicitly defined?    int count = 1;

int main()
{
    int i; // This is a POORLY NAMED local variable.
    for (i=0; i < 10; i++)
    {
        rams_count = i*2;
        func1();
    }

    return 0;
}

void func1()
{
    cout << "Count: " << rams_count; // access global count;
    cout << "\n";
    func2();

}
void func2()
{
    int rams_count; // This is a local variable.
               // CHF - It's effectively a new variable!

    for (rams_count=0;rams_count < 3;rams_count++)
    {   
        cout << ".";
    }
}

