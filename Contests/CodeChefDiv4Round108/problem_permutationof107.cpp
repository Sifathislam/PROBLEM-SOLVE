#include <iostream>
using namespace std;
void slove(){
    int n; cin>> n;
    for(int i = n; i >= 1; i--){
        cout << i << " ";
    }
    cout << endl;
}
int main() {
	long long int t; cin >> t; 
	while(t--){
	    slove();
	}
	return 0;
}
