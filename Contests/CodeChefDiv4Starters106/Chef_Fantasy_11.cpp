#include<bits/stdc++.h>
using namespace std;

int main() {
	int testCase; cin >> testCase;
	while(testCase--){
	    int n; cin >> n;

        int choice1 = n;
        int choice2 = n - 1;

        cout << choice1 * choice2 << endl;
	
	}
	return 0;
}
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;  // Number of test cases

//     for (int t = 0; t < T; t++) {
//         int N;
//         cin >> N;  // Number of players Chef is considering

//         // Calculate the number of choices for the captain and vice-captain
//         long long choices_for_captain = N;
//         long long choices_for_vice_captain = N - 1;

//         // Calculate the total choices
//         long long total_choices = choices_for_captain * choices_for_vice_captain;

//         cout << total_choices << endl;
//     }

//     return 0;
// }
