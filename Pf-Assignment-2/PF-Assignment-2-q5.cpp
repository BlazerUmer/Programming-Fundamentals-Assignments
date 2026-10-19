//assignment 2 question 5 all parts
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 51;       //fits till 50
    long long fib[SIZE];       //stores fibonacci sequnce
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < SIZE; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        //formula for fibonacci sequence
        //using array so we can recall previous values
        //alternative is next=a+b,a=b,b=next.but wont recall prev values
    }
    int choice;
    do
    {
        cout << "------FIBONACCI MAIN MENU-------" << endl;
        cout << "1. Ask k Fibonacci numbers" << endl;
        cout << "2. Print Fibonacci numbers less than T" << endl;
        cout << "3. Print Fibonacci numbers between Start and End" << endl;
        cout << "4. Sum of even Fibonacci terms (up to 4 million)" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        //created a main menu so all questions are in one
        if (choice == 1)
        {
            //part I:ask for k Fibonacci numbers one by one
            int k;
            cout << "How many Fibonacci Numbers you want to ask: ";
            cin >> k;
            for (int i = 0; i < k; i++)
            {
                int n;
                if (i == 0)
                    cout << "Which Fibonacci: ";
                else if (i == k - 1)
                    cout << "Which last Fibonacci you want to ask is: ";
                else
                    cout << "Which Next Fibonacci: ";
                cin >> n;
                if (n < 0 || n >= SIZE)
                {
                    cout << "Please enter a number between 0 and " << SIZE - 1 << endl;
                    i--;   //ask this one again
                }
                else
                {
                    cout << "F" << n << " = " << fib[n] << endl;
                }
            }
        }
        else if (choice == 2)
        {
            //part II:print all Fibonacci numbers less than T
            long long T;
            cout << "You want to Print Up to: ";
            cin >> T;
            cout << "The Sequence Up to <" << T << " is: ";
            bool first = true;
            for (int i = 0; i < SIZE; i++)
            {
                if (fib[i] >= T)
                    break;
                if (!first)
                    cout << ", ";
                cout << fib[i];
                first = false;
            }
            cout << endl;
        }
        else if (choice == 3)
        {
            //part III:print all Fibonacci numbers between Start and End
            long long start, end;
            cout << "Enter Start: ";
            cin >> start;
            cout << "Enter End: ";
            cin >> end;
            if (start > end)
            {
                cout << "Start cannot be bigger than End!" << endl;
            }
            else
            {
                cout << "Fibonacci numbers between " << start << " and " << end << ": ";
                bool found = false;
                for (int i = 0; i < SIZE; i++)
                {
                    if (fib[i] >= start && fib[i] <= end)
                    {
                        if (found)
                            cout << ", ";
                        cout << fib[i];
                        found = true;
                    }
                }
                if (!found)
                    cout << "None";
                cout << endl;
            }
        }
        else if (choice == 4)
            //ez but too long
            //formula was the main thing but was ez
        {
            //part IV:sum of even-valued terms not exceeding four million
            long long sum = 0;
            for (int i = 0; i < SIZE; i++)
            {
                if (fib[i] > 4000000)
                    break;

                if (fib[i] % 2 == 0)
                    sum = sum + fib[i];
            }
            cout << "Sum of even-valued Fibonacci terms not exceeding 4,000,000 = " << sum << endl;
        }
        else if (choice == 0)
        {
            cout << "Goodbye." << endl;
        }
        else
        {
            cout << "Invalid choice, try again." << endl;
        }
    } 
    while (choice != 0);
    //do while so we can keep taking input
    return 0;
    //correct output is being displayed
    //too long,my hands hurt
}