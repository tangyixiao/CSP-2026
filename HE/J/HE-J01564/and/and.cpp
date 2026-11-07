#include<bits/stdc++.h>
using namespace std;
long long int a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		    sum=max(sum,a[j]&a[i]);		 
		}
	}
	cout<<sum;
	return 0;
}
