#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if(n == 2 || n == 1){
        cout << "NO" << endl;
        return 0;
    }
    if(n % 2 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
     

    return 0;
}