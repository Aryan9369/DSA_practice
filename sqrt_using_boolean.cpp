#include <iostream>
using namespace std;

// Function to find square root using binary search
int findSquareRoot(int number) {
    if (number < 0) {
        cout << "Error: Negative number." << endl;
        return -1;
    }

    if (number == 0 || number == 1)
        return number;

    int start = 0, end = number, ans = 0;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (mid * mid == number) {
            return mid;
        }

        if (mid * mid < number) {
            start = mid + 1;
            ans = mid; // Store the floor of the square root
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = findSquareRoot(number);
    if (result != -1)
        cout << "Square root of " << number << " is " << result << endl;

    return 0;
}
