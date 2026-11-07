#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long k;
	cin>>k;
	int t;
	char b[k+2];
	long long a[k+2];
	long long maxn,minn,cnt=0;
	for(int j=1;j<=k;j++)
	{
		cin>>a[j]>>b[j];
	}
	maxn=k;
	minn=1;
	while(maxn>minn)
	{
		if(a[maxn]>a[minn])
		{
			t=2;
		}
		if(a[maxn]<a[minn])
		{
			t=0;
		}
		if(a[maxn]==a[minn])
		{
			t=1;
		}
		if(b[maxn]!=b[minn])
		{	
		if(t==2)
		{
			a[maxn]=a[maxn]-a[minn];
			cnt=cnt+a[minn];
			minn++;
		}
		if(t==0)
		{
			a[minn]=a[minn]-a[maxn];
			cnt=cnt+a[maxn];
			maxn--;
		}
		if(t==1)
		{
			cnt=cnt+a[minn];
			minn++;
			maxn--;
		}
		}
		else 
		{
		if(t==2)
		{
			a[maxn]=a[maxn]-a[minn];
			minn++;
		}
		if(t==0)
		{
			a[minn]=a[minn]-a[maxn];
			maxn--;
		}
		if(t==1)
		{
			minn++;
			maxn--;
		}
		}
}	
	cout<<cnt;
    fclose(stdin);
    fclose(stdout);
    return 0;
 } 