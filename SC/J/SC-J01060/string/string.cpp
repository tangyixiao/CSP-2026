#include<bits/stdc++.h>
using namespace std;
long long x[200001];
char s[200001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>s[i];
	}
	int j=n,i=1;
	long long ans=0;
	while(j>=0&&i<=n)
	{
		if(s[i]!=s[j])
		{
			ans+=min(x[i],x[j]);
		}
		if(x[i]>x[j])
		{
			x[i]-=x[j];
			x[j]=0;
			j--;
		}
		else if(x[i]<x[j])
		{
			x[j]-=x[i];
			x[i]=0;
			i++;
		}
		else
		{
			x[i]=0;
			x[j]=0;
			i++;
			j--;
		}
	}
	cout<<ans;
	return 0;
}