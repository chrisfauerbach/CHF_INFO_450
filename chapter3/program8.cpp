#include <iostream>
using namespace std;

int main()
{
    int i;
    for (i=1; i <=100;++i){
        cout << i << "/2 is: " << (float) i / 2 << '\n';
        //CHF - What happens here? cout << i << "/2 is: " << (float)( i / 2 )<< '\n';
        //CHF - What happens here? cout << i << "/2 is: " << (float) i /(float) 2 << '\n';

    }
    return 0;

}