#include<bits/stdc++.h>
using namespace std;
int a[5000005];
int b[5000005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i= 1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n == 1 || n == 2 )
	{
		cout<<1;
		return 0;
	}
	int ans=0;
	for(int i = 1;i<=n;i++)
	{
		int num = n;
		int num1 = 0;
		int j = 1;
		a[0] = -1;
		while(num >0)
		{
			if(a[j+i-1] == a[j+i-2])
			{
				a[j+i-1]=0;
				a[j+i-2]=0;
				num -= 2;
			}
			else
			{
				b[j+i-1] = a[j+i-1];
				num -=1;
			}
		}
		for(int i = 1;i<=n;i++)
		{
			if(b[i]==i)
			{
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}