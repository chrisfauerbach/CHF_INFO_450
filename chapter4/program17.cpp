#include <iostream>
using namespace std;

int main()
{
    int t;
    int count;

    for (t=0;t<100;t++){
        count = 1;
        cout << t << ": "; //CHF Added this to figure out what was going on.
        for(;;){
            //cout << count << ' ';
            //count++;
            cout << count++ << ' '; //CHF Magic!  What happens here?
            // cout << ++count << ' '; //CHF Compared to this?  Experiment!

            if (count==10)break;
        }
        cout << "\n";
    }
    return 0;
}