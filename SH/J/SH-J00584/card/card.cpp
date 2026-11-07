#include<bits/stdc++.h>
using namespace std;
int n,m,c,s,arr[200010],drr[200010],crr[200010];
bool vrr[200010];
void put(int k)
{
	for(int i=1;i<=c;i++)
	{
		if(drr[i]==k)
		{
			for(int j=i;j<=c;j++)
			{
				drr[j]=0;
				c--;
			}
			drr[i]=k;
			c++;
			return;
		}		
	}
	drr[c+1]=k;
	c++;
	return;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>arr[i];
	for(int i=1;i<=n;i++)
	{
		s++;
		memset(drr,0,sizeof(drr));
		memset(vrr,0,sizeof(vrr));
		for(int j=s;j<=m;j++) put(arr[j]);
		for(int j=1;j<=c;j++)
		{
			if(!vrr[j])
			{
				crr[j]++;
				vrr[j]=1;
			}
		}
	}
	for(int i=1;i<=n;i++) cout<<crr[i]<<' ';
	return 0;
}
