#include <bits/stdc++.h>
using namespace std;
using LL=long long;
const int N=5e5+4;
const int M=3e5+4;
int a[N],ans[M];
int b[N];
int la[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		memset(b,0,sizeof(b));
		memset(la,0,sizeof(la));
		int co[N];
		for(int i=1;i<=n;i++)co[i]=a[i];
		int c=0;
		for(int j=i;j<=n;j++)
		{
			if(la[co[j]])
			{
				for(int k=la[co[j]];k<j;k++)
				{
					la[co[k]]=0;
					co[k]=0;
				}
			}
			la[co[j]]=j;
		}
		for(int j=1;j<=m;j++)
		{
			if(la[j])ans[j]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
//12345 123456