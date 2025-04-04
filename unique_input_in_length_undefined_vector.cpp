#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number exists in the vector
bool exists(const vector<int>& v, int num) {
    for (int val : v) {
        if (val == num) return true;
    }
    return false;
}

// Input function with unique constraint
void input(int choice, vector<int>& v) {
    if (choice == 1) {
        char more;
        do {
            int x;
            cout << "Enter a number: ";
            cin >> x;

            // Check for uniqueness
            if (exists(v, x)) {
                cout << "This number already exists. Please enter a unique number." << endl;
            } else {
                v.push_back(x);
            }

            cout << "Do you want to enter more numbers? (y/n): ";
            cin >> more;
        } while (more == 'y' || more == 'Y');
    } else {
        cout << "You chose not to input any numbers." << endl;
    }
}

// Function to display vector elements
void display(const vector<int>& v) {
    if (v.empty()) {
        cout << "Vector is empty!" << endl;
        return;
    }

    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    int i;

    cout << "Do you want to input data? (1 = YES, 0 = NO): ";
    cin >> i;

    input(i, v);
    display(v);

    cout << "Vector size: " << v.size() << endl;

    return 0;
}
