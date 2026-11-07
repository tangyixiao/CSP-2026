#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char b[200005];
long long cnt;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i];
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	for(int i=1,j=n;i<j;)
	{
		if(b[i]==b[j])
		{
			if(a[i]==a[j])
			{
				i++;
				j--;
				continue;
			}
			if(a[i]<a[j])
			{
				a[j]-=a[i];
				i++;
				continue;
			}
			if(a[i]>a[j])
			{
				a[i]-=a[j];
				j--;
				continue; 
			}
		}
		if(b[i]!=b[j])
		{
			if(a[i]==a[j])
			{
				cnt+=a[i];
				i++;
				j--;
				continue;
			}
			if(a[i]<a[j])
			{
				cnt+=a[i];
				a[j]-=a[i];
				i++;
				continue;
			}
			if(a[i]>a[j])
			{
				cnt+=a[j];
				a[i]-=a[j];
				j--;
				continue; 
			}
		}
	}
	cout<<cnt;
	return 0;
}
