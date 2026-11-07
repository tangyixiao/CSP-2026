#include <bits/stdc++.h>

using namespace std;

int n,m,a[500005],ans[300005];

int main()
{  
	freopen("card.in","r",stdin); freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		int s[500005],cnt=1;
		for(int j=i;j<=n;j++)
		{
			s[cnt]=a[j];
			for(int k=1;k<cnt;k++)
			{
				if(s[k]==s[cnt]) 
				{
					for(int l=k;l<cnt;l++) s[l]=0;
					break;
				}
			}
			cnt++;
		}
		for(int j=1;j<cnt;j++) ans[s[j]]++;
	}
	for(int i=1;i<=m;i++) printf("%d ",ans[i]);
	fclose(stdin); fclose(stdout);
	return 0;
}