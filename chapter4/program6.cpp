#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // int num;
    double sq_root;

    for (int num = 1;num < 100;num++){
        sq_root = sqrt((double) num);
        cout << num << " has a square root of: " << sq_root << "\n";
    }

    return 0;
}