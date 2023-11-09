#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            int val; cin >> val;
            a[i] = val;
            x[val]++;
        }
        if(x.size()==1){
            cout<<"Yes"<<endl;
        }
        else if(x.size()==2){
            if(x[a[0]]==n/2 || x[a[0]]==ceil(n/2.0)){
  
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
        // cout << x.size() << endl;
        // cout << x[a[0]] << endl;
        // for(auto && i : a) cout << i << " ";
        // cout << endl << endl;
        // for(auto it: x){
        //     cout << it.first <<" ";
        //     cout << it.second << endl;
        // }
    }
 
    return 0;
}