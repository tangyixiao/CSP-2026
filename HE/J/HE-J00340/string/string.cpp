#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200005],ans=0,num=0;
	char b[200005],str='1';
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n/2+n%2;i++)
	{
		if(b[i]!=str)
		{
			if(a[i]>num)
			{
				ans+=min(num,a[i]);
				num=abs(num-a[i]);
				str=b[i];
			}
			else
			{
				
				ans+=min(num,a[i]);
				num=abs(num-a[i]);
			}
		}
		else
		{
			num+=a[i];
		}
		
		if(b[n-i+1]!=str)
		{
			if(a[n-i+1]>num)
			{
				ans+=min(num,a[n-i+1]);
				num=abs(num-a[n-i+1]);
				str=b[n-i+1];
			}
			else
			{
				ans+=min(num,a[n-i+1]);
				num=abs(num-a[n-i+1]);
			}
		}
		else
		{
			num+=a[i]; 
		}
	}
	cout<<ans;
	return 0;
}
