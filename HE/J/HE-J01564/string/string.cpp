#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
   int n;
   cin>>n;
   string sum;
   for(long long i=0;i<n;i++)
   {
   	int x;
   	string y;
   	cin>>x>>y;
   	for(long long int i=0;i<x;i++)
   	{
   		sum=sum+y;
	}
	}
	long long int ans=0;
	for(long long int i=0,j=sum.length()-1;i<=sum.length()/2,j>=sum.length()/2;i++,j--)
	{
		if(sum[i]!=sum[j])
		{
			ans++;
		}		
	}
	cout<<ans;
	return 0;
}
