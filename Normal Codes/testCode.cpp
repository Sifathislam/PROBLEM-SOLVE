#include<bits/stdc++.h>
using namespace std;
int main()
{  
    vector<int> v;


    int n;
    cin>>n;


    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.insert(v.begin(),x);
    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}