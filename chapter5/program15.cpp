#include <iostream> 
using namespace std;

int main()
{
    int OUTER = 3;
    int INNER = 4;
    int t;
    int i;
    //int num[3][4]; // CHF - Ugh, back to hardcoded sizes.
    int num[OUTER][INNER];

    for (t = 0; t < OUTER;t++){
      for (i = 0;i < INNER; i++)
      {
          num[t][i] = (t*4) + i + 1;
          cout << num[t][i] << ' ' ;
      }
      cout << "\n";
    }

    // CHF - Interesting way of printing this out. 
    return 0;

}