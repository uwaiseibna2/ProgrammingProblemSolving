#include <iostream>
using namespace std;

int main() {
    const int rows = 1000;
    const int cols = 2;
    int arr[rows][cols];

    // Generate random values for the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 100; // Random number between 0 and 99
        }
    }

    // Print the array to the console
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



