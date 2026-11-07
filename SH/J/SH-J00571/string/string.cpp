#include<bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];
long long int d[200],e[200];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long int n,sum=0,maxs=0;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		sum+=a[i];
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			s+=c[i];
		}
	}
	if(sum%2==1)
	{
		for(int i=0;i<sum/2;i++)
		{
			d[s[i]]++;
		}
		for(int i=sum/2+1;i<sum;i++)
		{
			e[s[i]]++;
		}
		for(int i=0;i<200;i++)
		{
			maxs=max(maxs,max(d[s[i]]-e[s[i]],e[s[i]]-d[s[i]]));
		}
		cout<<maxs;
	}
	if(sum%2==0)
	{
		for(int i=0;i<sum/2;i++)
		{
			d[s[i]]++;
		}
		for(int i=sum/2;i<sum;i++)
		{
			e[s[i]]++;
		}
		for(int i=0;i<200;i++)
		{
			maxs=max(maxs,max(d[s[i]]-e[s[i]],e[s[i]]-d[s[i]]));
		}
		cout<<maxs;
	}
	return 0;
}
