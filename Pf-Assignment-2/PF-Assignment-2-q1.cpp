//Question 1 of assignment 2
#include<iostream>
using namespace std;
int main()
{
	//initializing variables
    int n;
    cout << "Enter number: ";
    cin >> n;
     
    // Top half, including the middle row
    for (int r = 0; r < n; r++) {
        for (int v = n; v > n - r; v--) {
            cout << v << " ";
        }
        for (int k = 0; k < 2 * n - 1 - 2 * r; k++) {
            cout << n - r << " ";
        }
        for (int v = n - r + 1; v <= n; v++) {
            cout << v << " ";
        }
        cout << endl;
    }

    // Bottom half,skips the middle row
    for (int r = n - 2; r >= 0; r--) {
        for (int v = n; v > n - r; v--) {
            cout << v << " ";
        }
        for (int k = 0; k < 2 * n - 1 - 2 * r; k++) {
            cout << n - r << " ";
        }
        for (int v = n - r + 1; v <= n; v++) {
            cout << v << " ";
        }
        cout << endl;
    }
    //correct output is being displayed
}