#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[200005],ans;
char c[200005];
int main() 
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	ll id=n,num=0,num_ed=0,shyu=0;
	for(int i=1;i<=n;i++)
	{
		num+=a[i];
		for(int j=id;j>i;j--)
		{
			if(shyu==0)
			{
				num_ed+=a[j];
				shyu=a[j];
			}
			else
			{
				num_ed+=shyu;
			}
			if(num_ed<=num)
			{
				if(c[j]!=c[i]) ans+=shyu;
				shyu=0;
				if(num_ed==num)
				{
					id=j-1;
					break;
				}
			}
			else
			{
				if(c[i]!=c[j]) ans+=shyu-(num_ed-num);
				shyu=num_ed-num;
				id=j;
				num_ed=num;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
