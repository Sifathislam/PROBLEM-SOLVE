// Problem Link: https://www.codechef.com/START110D/problems/SPCP4
#include <iostream>
using namespace std;

int main() {
	int testCase; cin >> testCase;
	while(testCase--){
	    int totalStd , boys, groupSize; cin >> totalStd >> boys >> groupSize;
	    int girls = totalStd - boys;
	    int boysGroup = boys / groupSize;
	    int girlsGroup = girls / groupSize;
	    int boys_Not_in_Group = (groupSize * boysGroup) - boys;
        int girls_Not_in_Group = (groupSize * girlsGroup) - girls;
        int the_result = abs(boys_Not_in_Group - girls_Not_in_Group);
        cout << the_result << endl;
	}
	
// 
	return 0;
}
