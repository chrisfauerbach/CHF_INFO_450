// A simple employee database program.
#include <iostream>
using namespace std;

/*
char name[10][80];
char phone[10][20];
float hours[10];
float wage[10];
*/
//CHF - Let's do some a little different.
const int MAX_EMPLOYEES = 10;
const int MAX_NAME_LENGTH = 80;
const int MAX_PHONE_LENGTH = 20;

char name[MAX_EMPLOYEES][MAX_NAME_LENGTH];
char phone[MAX_EMPLOYEES][MAX_PHONE_LENGTH];
float hours[MAX_EMPLOYEES];
float wage[MAX_EMPLOYEES];

int menu();
void enter();
void report();
void flush(); // Why am I building this?

int main()
{
    int choice;
    do
    {
        choice = menu(); // get selection
        switch (choice)
        {
        case 0:
            break;
        case 1:
            enter(); // CHF - How would you 'confirm' each record?
            break;
        case 2:
            report();
            break;
        default:
            cout << "Try again.\n\n";
        }
    } while (choice != 0);

    return 0;
}

//What does the user want to do?
int menu()
{
    int choice;
    cout << "0. Quit\n";
    cout << "1. Enter information.\n";
    cout << "2. Report information.\n";
    cout << "Choose one: ";
    cin >> choice;
    flush();
    return choice;
}

// CHF - Anyone know why I have this here?
void flush()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

// Enter information
void enter()
{
    int i; 
    //  char temp[MAX_NAME_LENGTH]; CHF - Unused?

    for (i = 0; i < MAX_EMPLOYEES; i++)
    {
        cout << "Enter last name: ";
        fgets(name[i], MAX_NAME_LENGTH, stdin); 

        // CHF - I don't feel like looping 10 times
        //       every time I want to do this. 
        if (strlen(name[i]) == 1)
        { 
            name[i][0] = 0;
            cout << "Completed entering.\n";
            break;
        }
        cout << "Enter phone number: ";
        fgets(phone[i], MAX_NAME_LENGTH, stdin);

        // CHF - Cleaning up new lines;
        name[i][strlen(name[i]) - 1] = 0;
        phone[i][strlen(phone[i]) - 1] = 0;
        cout << "Enter number of hours worked: ";
        cin >> hours[i];
        flush();
        cout << "Enter wages: ";
        cin >> wage[i];
        flush();
    }
}

// Display report
void report()
{
    int i;
    for (i = 0; i < MAX_EMPLOYEES; i++)
    {
        if (name[i][0] == 0) break; //CHF - Dont view things that aren't set up.
        cout << name[i] << " - [" << phone[i] << "] - ";
        cout << " $" << wage[i] * hours[i] << " (weekly)\n";
    }
}