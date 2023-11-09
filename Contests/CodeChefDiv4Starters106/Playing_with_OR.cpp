#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase; cin >> testCase;

    while (testCase--)
    {
        int n , k; cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
       
       int Result = arr[0];
       int counter = 0;

       int i = 0; int j = 0;
       while (j < n)
       {
        //  step 1 calcultation
        Result |= arr[j];

        if(j - i + 1 < k){
            j++;
        } 

        if(j - i + 1 == k){
            if(Result % 2 != 0){
                counter++;
            }
            i++;
            j++;
        }

       }
       cout << counter << endl;
       
    }
    
    return 0;
}