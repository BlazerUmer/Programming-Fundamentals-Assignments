//assignment 1 question 2
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of the square: " << endl;
    cin >> n;
    // A 1D array to simulate the grid (handles up to n=100)
    int matrix[10000] = { 0 };
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int val = 1;
    // Fill the 1D array using spiral bounds
    while (top <= bottom && left <= right) {
        // Traverse Left to Right
        for (int i = left; i <= right; ++i) {
            matrix[(top * n) + i] = val++;
        }
        top++;
        // Traverse Top to Bottom
        for (int i = top; i <= bottom; ++i) {
            matrix[(i * n) + right] = val++;
        }
        right--;
        // Traverse Right to Left
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                matrix[(bottom * n) + i] = val++;
            }
            bottom--;
        }
        // Traverse Bottom to Top
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                matrix[(i * n) + left] = val++;
            }
            left++;
        }
    }
    // Print the array with spacing
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int num = matrix[(i * n) + j];
            if (num < 10) cout << " "; // Basic manual formatting
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
    //correct output is being displayed
}