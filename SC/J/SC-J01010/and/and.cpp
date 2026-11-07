#include<bits/stdc++.h>
using namespace std;
vector <int> arr;
int n,m,ans,max=0,maxw;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			maxw=i;
		}
	}
	ans=max;
	arr[maxw]=0;
	max=0;
	for(int j=1;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
				maxw=i;
			}
		}
		ans=ans&max;
		arr[maxw]=0;
		max=0;	
	}
	cout<<max;
	return 0;	
}  