#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long arr[n];
	string arr1[n];
    long long s=0;	
	string arr2[100000]; 
	for (long long i=0;i<n;i++)
	{
		cin>>arr[i];
		cin>>arr1[i];
	}
    for (long long i=0;i<n;i++)
    {
    	for (long long j=0;j<arr[i];j++)
    	{
    		arr2[s]=arr1[i];
    		s++;
		}
	}
	long long sum=0;
	for (long long i=0;i<s/2;i++)
	{
		if (arr2[i]!=arr2[s-1-i])
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
