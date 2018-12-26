#include <iostream>
using namespace std;


const int OUTER = 10;  // CHF - const?
const int INNER = 2;

int sqrs[OUTER][INNER] = {
  {1,1},
  {2,4},
  {3,9},
  {4,16},
  {5,25},
  {6,36},
  {7,49},
  {8,64},
  {9,81},
  {10,100},
};

int main()
{
    int i;
    int j;

    cout << "Enter a number between 1 and 10.\n";
    cin >> i;

    //look up i
    // CHF - Come on..   this is the most inefficient way of doing this lookup.
    // CHF - How can we do it better?  O(1) v O(n)
    for (j = 0;j < 10;j++){
        if (sqrs[j][0] == i){
            break;
        }
    }
        cout << "The square of " << i << " is ";
        cout << sqrs[j][1] << "\n";
    
    return 0;
}