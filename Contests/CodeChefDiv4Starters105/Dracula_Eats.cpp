#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        int n;
        cin >> n;
        int j = 1; // Start from Monday
        int counter = 0;
        for (int i = 0; i < n; i++) {
            if (j == 2) {  // Dracula's favorite day (Tuesday)
                counter++;
            }
            j = (j % 7) + 1; // Increment the day, and wrap around if it's Sunday (7)
        }
        cout << counter << endl;
    }
    return 0;
}
