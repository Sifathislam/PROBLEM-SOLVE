#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int sum=0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        sum += a[i];
	    }
	    int b[n];
	    
	    
	    sort(a,a+n);
	   // if(a[0] == a[n-1])
	   // cout<<"YES\n";
	   // else{
	        int flag=0;
	      if(sum %n == 0){
	          for(int i=0; i<n; i++){
	              b[i] = (sum/n);
	          }
	          for(int i=0; i<n; i++){
	              if(abs(a[i]-b[i])%2 != 0){
	                  flag = 1;
	              }
	          }
	          if(flag)
	          cout<<"NO\n";
	          else
	          cout<<"YES\n";
	      }
	      else{
	          cout<<"NO\n";
	      }
	   
	   
	   // }
	}
	return 0;
}
