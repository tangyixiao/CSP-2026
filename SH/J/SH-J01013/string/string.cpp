#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	int n,i;
	cin>>n;
	long long a[n],sum=0,s1[n],s2[n],l=0;
	long long ans=0;
	string m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		s1[i]=sum;//前缀和 
		cin>>m[i];
	}
	sum=0;
	for(i=n-1;i>=0;i--)
	{
		sum+=a[i];
		s2[n-i-1]=sum;//后缀和 
	}
	int r=0;
	if(sum%2==1)
	{
		for(;;)
		{
			if(s1[l]>=s2[r])
			{
				if(m[l]!=m[n-r-1])
				{
					ans+=min(a[l]-s1[l]+s2[r],a[n-r-1]);
				}
				r++;
				if(s1[l]==s2[r])l++;
			}
			else if(s1[l]<s2[r])
			{
				if(m[l]!=m[n-r-1])ans+=min(a[n-r-1]-s1[r]+s2[l],a[l]);
				l++;
			}
			if(s1[l-1]>=sum/2+1&&s2[r-1]>=sum/2+1)break;	
		} 
	}
	else if(sum%2==0)
	{
		for(;;)
		{
			
			if(s1[l]>=s2[r])
			{
				if(m[l]!=m[n-r-1])
				{
					ans+=min(a[l]-s1[l]+s2[r],a[n-r-1]);
				}
				r++;
				if(s1[l]==s2[r])l++;
			}
			else if(s1[l]<s2[r])
			{
				if(m[l]!=m[n-r-1])ans+=min(a[n-r-1]-s1[r]+s2[l],a[l]);
				l++;
			}
			if(s1[l-1]>=sum/2&&s2[r-1]>=sum/2)break;
		} 
	}
	cout<<ans;
	return 0;
}
