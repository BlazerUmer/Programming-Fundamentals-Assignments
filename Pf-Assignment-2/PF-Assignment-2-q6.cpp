//assignment 2 question 6
#include <iostream>
using namespace std;
int main()
{
    //initializing variables
    int bd, bm, by;   
    int cd, cm, cy;   
    int maxDay;      
    bool valid;
    cout << " AGE CALCULATOR " << endl;

    //validating date of birth
    do
    {
        valid = true;

        cout << "\nEnter Date of Birth" << endl;
        cout << "Day: ";
        cin >> bd;
        if (bd > 31 || bd < 1)
        {
            cout << "Enter valid day,between (1-31)" << endl;
            cin >> bd;
        }
        cout << "Month: ";
        cin >> bm;
        cout << "Year: ";
        cin >> by;

        if (by < 1)
        {
            cout << "Invalid year!" << endl;
            valid = false;
        }
        else if (bm < 1 || bm > 12)
        {
            cout << "Invalid month! Month must be between 1 and 12." << endl;
            valid = false;
        }
        else
        {
            //find how many days this month has
            if (bm == 4 || bm == 6 || bm == 9 || bm == 11)
            {
                maxDay = 30;
            }
            else if (bm == 2)
            {
                if ((by % 4 == 0 && by % 100 != 0) || by % 400 == 0)
                    maxDay = 29;   // leap year
                else
                    maxDay = 28;
            }
            else
            {
                maxDay = 31;
            }
            if (bd < 1 || bd > maxDay)
            {
                cout << "Invalid day! This month has " << maxDay << " days." << endl;
                valid = false;
            }
        }
        if (!valid)
            cout << "Please enter the Date of Birth again." << endl;
    } while (!valid);
    //validating current date
    do
    {
        valid = true;
        cout << "\nEnter Current Date" << endl;
        cout << "Day: ";
        cin >> cd;
        if (cd > 31 || cd < 1)
        {
            cout << "Enter valid day,between (1-31)" << endl;
            cin >> cd;
        }
        cout << "Month: ";
        cin >> cm;
        cout << "Year: ";
        cin >> cy;
        if (cy < 1)
        {
            cout << "Invalid year!" << endl;
            valid = false;
        }
        else if (cm < 1 || cm > 12)
        {
            cout << "Invalid month! Month must be between 1 and 12." << endl;
            valid = false;
        }
        else
        {
            if (cm == 4 || cm == 6 || cm == 9 || cm == 11)
            {
                maxDay = 30;
            }
            else if (cm == 2)
            {
                if ((cy % 4 == 0 && cy % 100 != 0) || cy % 400 == 0)
                    maxDay = 29;
                else
                    maxDay = 28;
            }
            else
            {
                maxDay = 31;
            }

            if (cd < 1 || cd > maxDay)
            {
                cout << "Invalid day! This month has " << maxDay << " days." << endl;
                valid = false;
            }
            else if (cy < by ||
                (cy == by && cm < bm) ||
                (cy == by && cm == bm && cd < bd))
            {
                //current date must not come before the date of birth
                cout << "Current date cannot be before the Date of Birth!" << endl;
                valid = false;
            }
        }
        if (!valid)
            cout << "Please enter the Current Date again." << endl;
    } while (!valid);
    //calculating age
    if (cd < bd)
    {
        int prevMonth = cm - 1;
        int prevYear = cy;

        if (prevMonth == 0)    // previous month of January is December
        {
            prevMonth = 12;
            prevYear = cy - 1;
        }
        int prevDays;
        if (prevMonth == 4 || prevMonth == 6 || prevMonth == 9 || prevMonth == 11)
        {
            prevDays = 30;
        }
        else if (prevMonth == 2)
        {
            if ((prevYear % 4 == 0 && prevYear % 100 != 0) || prevYear % 400 == 0)
                prevDays = 29;
            else
                prevDays = 28;
        }
        else
        {
            prevDays = 31;     // January, March, May, July, August, October, December
        }
        cd = cd + prevDays;
        cm = cm - 1;
    }
    //borrowing from year if needed
    if (cm < bm)
    {
        cm = cm + 12;
        cy = cy - 1;
    }
    int ageDays = cd - bd;
    int ageMonths = cm - bm;
    int ageYears = cy - by;
    cout << "\nThe Age is " << ageYears << " years " << ageMonths << " Months and "<< ageDays << " Days." << endl;
    if (ageYears > 100)
        cout << "You are old!" << endl;
    return 0;
    //correct output is being displayed
    //finally done with this
}