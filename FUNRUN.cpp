#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)cin>>a[i];
	    for(int i=0;i<n;i++)cin>>b[i];
	      for(int i = 1;i < n; ++i)
    {
       if(a[0] < a[i])
           a[0] = a[i];
    }
      for(int i = 1;i < n; ++i)
    {
       if(b[0] < b[i])
           b[0] = b[i];
    }
	   
	    if(b[0]!=a[0])cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
