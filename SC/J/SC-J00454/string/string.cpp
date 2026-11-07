#include<iostream>
#include <cstdio> 
using namespace std;
int n;
int a[200005];
char c[200005];
long long cnt=0;
long long l;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int i=1,j=n;
	while(i<j)
	{
		if(c[i]!=c[j])
		{
			cnt+=min(a[i],a[j]);
		}
		if(a[i]<a[j])
		{
			a[j]-=a[i];
			a[i]=0;
		}
		else
		{
			a[i]-=a[j];
			a[j]=0;
		}
		if(a[i]==0)
		{
			i++;
		}
		if(a[j]==0)
		{
			j--;
		}
	}
	cout<<cnt;
	return 0;
}

