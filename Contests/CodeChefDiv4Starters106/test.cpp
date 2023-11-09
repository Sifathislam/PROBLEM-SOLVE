#include<bits/stdc++.h>
using namespace std;

int main(){

     string s = "sssff";
     map<char, int> mp;
     for (auto &&i : s)
     {
        mp[i]++;
     }

    for (int i = 0; i < s.size(); i++)
    {
        cout << mp[s[i]] << " ";
    }
    
     

    return 0;
}