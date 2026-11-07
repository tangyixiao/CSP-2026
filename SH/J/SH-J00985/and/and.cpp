#include<bits/stdc++.h>
using namespace std;
#define long long int
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	int n,m,a[200005],flag=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=0,min=100;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
				swap(a[i],a[j]);
		}
	}
	for(int i=0;i<m-1;i++)
	{
		flag=a[i] and a[i+1];
		a[i+1]=flag;
	}
	cout<<a[m];
	return 0;
}
