// Oh, we're going to execute it ANYWAY!

int main()
{
    int crash[10];
    int i;
    for (i=0;i<100;i++){
        crash[i] = i; //  This is gonna puke. Why?
    }

    return 1;
}