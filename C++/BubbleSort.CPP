
// Contributer - Ajit Varpe 
// Follow  me on Github https://github.com/AjitVarpe


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n); // Using vector for dynamic array size
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool swapped; // Flag to check if a swap occurred
    for (int counter = 0; counter < n - 1; counter++) {
        swapped = false; // Reset the swap flag for this iteration
        for (int i = 0; i < n - 1 - counter; i++) { // Reduce range
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]); // Using std::swap for clarity
                swapped = true; // A swap occurred
            }
        }
        // If no elements were swapped, the array is sorted
        if (!swapped) {
            break; // Exit early
        }
    }

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // For cleaner output

    return 0;
}

