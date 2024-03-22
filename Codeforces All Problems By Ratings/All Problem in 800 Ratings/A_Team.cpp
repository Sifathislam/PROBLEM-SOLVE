#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin >> n; 
    int result = 0;
    while (n--)
    {
        int arr[3]; 
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i]; 
        }
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum+=arr[i];
        }
        
        if(sum > 1){
            result++;
        }
        
    }
    cout << result << endl;
     

    return 0;
}