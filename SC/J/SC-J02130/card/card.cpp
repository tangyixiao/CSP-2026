#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],t[100005],num[200005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		int k=1;
		for(int j=i;j<=n;j++,k++)
		{
			bool fl=1;
			for(int x=1;x<k;x++)
			{
				if(num[x]==a[j])
				{
					fl=0;
					k=x;
					break;
				}
			}
			num[k]=a[j];
		}
		for(int j=1;j<k;j++)
		{
			t[num[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		printf("%d ",t[i]);
		//cout<<t[i]<<" ";
	}
	return 0;
}