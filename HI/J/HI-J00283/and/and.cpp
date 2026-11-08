#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("and.in""r"stdin);
//	freopen("and.out""w"stdout);
	int n, m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
	   if( arr[i]/10+arr[i]%10 > arr[i+1]/10+arr[i+1]%10)	
	   {
	   	int ans=max(arr[i],arr[i+1]);
	   }
	   else
	   {
	   	int ans=arr[i+1];
	   }
	}
	cout<<ans; 
	return 0; 
} 
 
