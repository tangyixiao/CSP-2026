#include<bits/stdc++.h>
using namespace std;
int a[500001];//原始数据 
int b[500001];//桌面
int num;
int ans[300001],vis[300001];
int main()
{
//  a[j] now hand card
//  b[k] bianlis card on deskop
//  b[num] the best right card
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	int zzz;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)//i is now game round
	{
		num=0;//num is how many cards are there on the deskop
		for(int j=i;j<=n;j++)//j is card number
		{
			zzz=0;
			for(int k=num;k>0;k--)//k is used to bianli from num to 1
			{
				if(b[k]==a[j])
				{
					num=k;
					zzz=1;
					break;
				}
			}
			if(zzz==0)
			{
				num++;
				b[num]=a[j];
			}
		}
		for(int z=1;z<=num;z++)
		{
			if(vis[b[z]]==0)
			{
				ans[b[z]]+=1;
				vis[b[z]]=1;
			}
		}
		for(int s=1;s<=num;s++)
		{
			vis[s]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
