#include<bits/stdc++.h>
using namespace std;

int main(){

     int arr[5][5];
     for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j < 5; j++)
        {
            cin >>arr[i][j];
        }
        
     }
     int position = 0;
     
     for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j < 5; j++)
        {
            if(arr[i][j] == 1){
                position = abs(i - 2) + abs(j - 2);
            }
        }
     }
     cout << position;     
    return 0;
}