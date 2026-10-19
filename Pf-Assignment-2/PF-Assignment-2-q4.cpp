//assignment 2 question 4
//doing both in one
#include <iostream>
using namespace std;
int main()
{
    int question;
    cout << "Enter Question Number: " << endl;
    cin >> question;
    if (question == 1)
    {
        //part 1 of q4
        int arr[100];
        int count = 0;
        int input;
        //taking input 
        cout << "Enter numbers (-1 to stop): ";
        for (int i = 0; i < 100; i++) 
        {
            cin >> input;
            if (input == -1) 
            {
                break;
            }
            arr[count] = input;
            count++;
            if(count>100)
            {
                cout << "Number input limit is 100." << endl;
                return 0;
            }
        }
        //sorting even indices in increasing order
        for (int i = 0; i < count; i += 2)
        {
            for (int j = i + 2; j < count; j += 2) 
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        //sorting odd indices in decreasing order
        for (int i = 1; i < count; i += 2) 
        {
            for (int j = i + 2; j < count; j += 2)
            {
                if (arr[i] < arr[j]) 
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        //display the sorted array
        cout << "Output: ";
        for (int i = 0; i < count; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
    }
    else if (question == 2)
    { 
            int values[100];
            int result[100];
            int length;
            //taking input from user
            cout << "Enter the size of the array: ";
            cin >> length;
            if (length > 100 || length < 0)
            {
                cout << "Enter valid size(max 100,min 0)." << endl;
                return 0;
            }
            //taking the array elements from the user
            cout << "Enter the elements: ";
            for (int a = 0; a < length; a++) 
            {
                cin >> values[a];
            }
            //sort the original array in increasing order
            for (int a = 0; a < length; a++) 
            {
                for (int b = a + 1; b < length; b++) 
                {
                    if (values[a] > values[b]) 
                    {
                        int swapVal = values[a];
                        values[a] = values[b];
                        values[b] = swapVal;
                    }
                }
            }
            //rearrange into required format.min max.
            for (int a = 0; a < length; a++) 
            {
                if (a % 2 == 0) 
                {
                    //even indices get the maximums from the end
                    result[a] = values[length - 1 - (a / 2)];
                }
                else 
                {
                    //odd indices get the minimums from the start
                    result[a] = values[a / 2];
                }
            }
            //copy the rearranged values back and print
            cout << "Output: ";
            for (int a = 0; a < length; a++) 
            {
                values[a] = result[a];
                cout << values[a] << " ";
            }
            cout << endl;
            return 0;
        }
    else
        cout << "Enter valid quesiton number (1 or 2)." << endl;
        //correct output is being displayed
        //took wayyy too long gang.
        //same question came in quiz and got it wrong
}
