// Using the bubble sort to order an array
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int nums[10];

    int a;
    int b;
    int t; // CHF - t  is TEMPORARY

    int size;

    size = 10; // Oh thank the good Lord himself, they're not hard coding the size anymore

    // Give the array some random initial values
    for (t=0;t<size;t++){
        nums[t] = rand();
    }

    cout << "Original array is: ";
    for (t = 0;t < size;t++){
        cout << nums[t] << " ";
    }
    cout << "\n";

    //This is a bubble sort.  
    // CHF - One of the most naive, yes  conceptually simple sorting algorithms
    // CHF - complexity O(n^2) -- That's super bad.
    // CHF - LOL.  The book talks about qsort.  Then says you can't use it until Chapter 20!
    // CHF - do we do extra credit in this class?

    // ok 'a' is a straight forward counter - from 1 up
    for (a=1;a < size;a++){
      // CHF - ok, now b is starting at the end, and moving in
      for(b = size-1; b >= a; b--){
        if (nums[b-1] > nums[b]){ // If out of order
          //Exchange elements
          t = nums[b-1];
          nums[b-1] = nums[b];
          nums[b] = t;
        }
      }
    }
    //This is the end of the bubble sort
    // CHF - This is a great way to comment the end of some nested code.

    // Display the sorted array
    cout << "Sorted array is: " ;
    for (t = 0;t < size;t++){
        cout << nums[t] << " ";
    }
    cout << "\n";

    // CHF - DRY - Don't repeat yourself..  Where am I repeating myself?
    return 1;
}