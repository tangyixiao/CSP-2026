#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],a1[200005],a2[200005],j,s,t,ans,b;
long long sum,sum1;
char c[200005],c1[200005],c2[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		sum1+=a[i];
		if(sum1<sum/2)
		{
			a1[i]=a[i];
			c1[i]=c[i];
		}
		else 
		{
			if(sum1==sum/2)
			{
				a1[i]=a[i];
				c1[i]=c[i];
				s=i;
			    b=1;
			}
			else 
			{
			    if(j==0&&b!=1)
				{
					a1[i]=sum/2-(sum1-a[i]);
				    c1[i]=c[i];
				    s=i;
				    a2[++j]=sum1-sum/2-sum%2;
				    c2[j]=c[i];
				}
				else 
			    {
				   a2[++j]=a[i];
				   c2[j]=c[i];
			    }
			}
			
		}
	}
    t=1;
	while(t<=s&&j>0)
	{
		if(c1[t]!=c2[j])
		{
			if(a1[t]>a2[j])
			{
				ans+=a2[j];
				a1[t]-=a2[j--];
			}
			else if(a1[t]==a2[j])
			{
				ans+=a2[j];
				t++;
				j--;
			}
			else 
			{
				ans+=a1[t];
				a2[j]-=a1[t++];
			}
		}
		else
		{
			if(a1[t]>a2[j])
			{
				a1[t]-=a2[j--];
			}
			else if(a1[t]==a2[j])
			{
				t++;
				j--;
			}
			else 
			{
				a2[j]-=a1[t++];
			}
		}
	}
    cout<<ans;
	return 0;
}
