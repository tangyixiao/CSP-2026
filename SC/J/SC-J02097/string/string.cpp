#include<bits/stdc++.h>
using namespace std;
long long n,c1=0,ans=0;
long long a[200001]={0};
char b[200001];
string c;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		for(int j=0;j<a[i];j++)
			c[c1++]=b[i];
	}
	if(c1%2==0)
	{
		int l=c1/2-1,r=c1/2;
		for(int i=0;i<c1/2-1;i++)
		{
			if(c[l]!=c[r])
				ans+=1;
			l--;
			r++;
		}
	}
	else
	{
		int l=(c1-1)/2-1,r=(c1-1)/2+1;
		for(int i=0;i<(c1-1)/2;i++)
		{
			if(c[l]!=c[r])
				ans+=1;
			l--;
			r++;
		}
	}
	cout<<ans;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	return 0;
}