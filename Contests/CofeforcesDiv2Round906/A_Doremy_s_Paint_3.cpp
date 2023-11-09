#include<bits/stdc++.h>
using namespace std;

int main(){

     int testCase; cin >> testCase;
     while (testCase--)
     {
        int n; cin >> n;
        vector<int> v(n);
        map<int,int>mp;


        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        if(mp.size() == 1){
            cout << "Yes" << endl;
        }
         
         else if(mp.size() == 2){
            if(mp[v[0]] == n / 2 || mp[v[0]] == ceil( n / 2.00)){
                cout << " Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
         }
         else{
            cout << "No" << endl;
         }
        
     }
     

    return 0;
}