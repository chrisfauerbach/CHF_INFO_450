#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // int i;
    int min_value;
    int max_value;
    int list[10];

    for (int i=0; i < 10; i++){
        list[i] = rand();
    }
     
    min_value = list[0];

    for (int i = 0; i< 10;i++){
        // if (min_value > list[i]) - CHF - This is equivalent.
        //                                  personal preference?
        if (list[i] < min_value){
            min_value = list[i];
        }
    }
    cout << "minimum value: " << min_value << "\n";
    max_value = min_value;  // Guaranteed to be low?  
    for (int i=0;i<10;i++){
        if (list[i] > max_value){
            max_value = list[i];
        }
    }
    cout << "maximum value: " << max_value << "\n";
    cout << "Subsequent runs of this code, do you ALWAYS get the same value?\n";
    cout << "How can you 'fix' that?\n";
    return 1;
}