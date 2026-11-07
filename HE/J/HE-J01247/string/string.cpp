#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int N=1e5*2+10;
ll n;
ll a[N];
char c[N];
ll ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	for(int i=1,j=n;i<=j; )
	{
		if(c[i]==c[j])
		{
			if(a[i]>a[j])
			{
				j--;
			}
			else
			{
				i++;
			}
		}
		else
		{
			if(a[i]>a[j])
			{
				ans+=a[j];
				a[i]-=a[j];
				j--;
			}
			else
			{
				if(a[j]>a[i])
				{
					ans+=a[i];
					a[j]-=a[i];
					i++;
				}
				else
				{
					ans+=a[i];
					i++;
					j--;
				}
			}

		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
