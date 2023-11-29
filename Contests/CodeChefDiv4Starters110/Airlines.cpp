// Problem Link: https://www.codechef.com/START110D/problems/SPCP2
#include<bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
	int testCase; cin >> testCase;
	while(testCase--){
	    int n, x; cin >> n >> x;
	    n = n * 100;
	    float result = n - x;
	    if(result >= 0){
	        cout << 0 << endl;
	    }
	    else{
	        result = abs(result);
	        result = ceil(result / 100);
	        cout << result << endl;
	    }
	}
	return 0;
}
