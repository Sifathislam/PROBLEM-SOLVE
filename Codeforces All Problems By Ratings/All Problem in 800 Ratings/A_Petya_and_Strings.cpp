#include<bits/stdc++.h>
using namespace std;

int main(){

     string s1, s2;
     cin >> s1 >> s2;
     transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
     transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
     int string_size = s1.size();
     for (int i = 0; i < string_size; i++)
     {
        if(s1[i] < s2[i]){
            cout << -1 ;
            return 0;
        }
        else if (s2[i] < s1[i])
        {
            cout << 1;
            return 0;
        }
        
     }
     cout << 0; 

    return 0;
}