#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n; cin >>n;

     if(n == 1){
        cout << "X";
        return 0;
     }

     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
        {
            if(i == (n/2) && j == (n / 2)){
                cout << "X";
            }
            if(i != (n/2) && j != (n / 2) && i+j == n-1){
                cout<< "/";
            }
            else if(i != (n/2) && j != (n / 2) && i == j){
                cout << "\\";
            }
            else{cout<< " ";}
        }
        cout << endl;
        
     }
     

    return 0;
}