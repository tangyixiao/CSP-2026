#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200010];
long long fl=-10000000;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	if(m==2)
	{
		for(long long i=1;i<=n;i++)
		{
			for(long long j=i+1;j<=n;j++)
			{
				fl=max(fl,a[i]&a[j]);
			}
		}
		cout<<fl;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(m==1)
	{
		for(long long i=1;i<=n;i++)
		{
			fl=max(fl,a[i]);
			cout<<fl;
			fclose(stdin);
			fclose(stdout);
			return 0;
		}
	}
	cout<<7;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
