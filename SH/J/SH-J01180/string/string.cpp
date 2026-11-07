#include<bits/stdc++.h>
using namespace std;
long long n,a[2000005],sum,ans;
char c[2000005];
string s="";
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=c[i];
		}
		sum+=a[i];
	}
	//cout<<'!'<<s<<endl;
	for(int i=0;i<sum/2;i++)
	{
		if(s[i]!=s[sum-1-i])ans++;
	}
	cout<<ans;
	return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
long long n,a[2000005],sum,now,ans,tmp,l=1,r;
char c[2000005],tp;
bool flag=true;
int main()
{
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	tmp=a[n];
	tp=c[n];
	while(now<=sum/2+1)
	{
		if(flag)
		{
			if(now+a[l]<=sum/2+1)
			{
				if(a[l]>tmp)
				{
					if(c[l]==tp)
					{
						ans+=a[l]-tmp;
					}
					else ans+=tmp;
					tmp=a[l]-tmp;
					tp=c[l];
					flag=false;
					r--;
				}
				else
				{
					if(c[l]==tp)
					{
						ans+=tmp-a[l];
					}
					else ans+=a[l];
					l++;
				}
				now+=a[l];
			}
			else
			{
				if(c[l]==tp)
				{
					ans+=a[l]-tmp;
				}
				else ans+=tmp;
				break;
			}
		}
		else
		{
			if(now+a[r]<=sum/2+1)
			{
				if(a[r]>tmp)
				{
					if(c[r]==tp)
					{
						ans+=a[r]-tmp;
					}
					else ans+=tmp;
					tmp=a[r]-tmp;
					tp=c[r];
					flag=true;
					l++;
				}
				else
				{
					if(c[r]==tp)
					{
						ans+=tmp-a[r];
					}
					else ans+=a[r];
					r--;
				}
				now+=a[r];
			}
			else
			{
				if(c[r]==tp)
				{
					ans+=a[r]-tmp;
				}
				else ans+=tmp;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}*/ 
