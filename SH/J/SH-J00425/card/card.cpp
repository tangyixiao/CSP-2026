#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[214514],num1=0,num2=0;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int i=1;i<=n;i++)
	{
		if (i<=n-1)
		{
			if (a[n-1]==1&&a[n]==1)
			{
				num1++;
			}
			else if (a[n-1]==2&&a[n-1]==2)
			{
				num2++;
			}
			else
			{
				num1++;
				num2++;
			}
		}
		else
		{
			if (a[n]==1)
			{
				num1++;
			}
			else
			{
				num2++;
			}
		}
	}
	cout<<num1<<" "<<num2<<endl;
	return 0;
}
