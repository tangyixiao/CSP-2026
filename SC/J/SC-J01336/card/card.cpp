#include<bits/stdc++.h>
using namespace std;
int cards[500050];
int counts[300050];
vector<int> card;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&cards[i]);
	}
	int cnt;
	for(int i=0;i<n;i++)
	{
		card.resize(0);
		cnt=0;
		for(int k=i;k<=n;k++)
		{
			for(int j=0;j<cnt;j++)
			{
				if(cards[k]==card[j])
				{
					card.resize(j);
					cnt=j;
				}
			}
			card.push_back(cards[k]);
			cnt++;
		}
		for(int j=0;j<cnt;j++)
		{
			counts[card[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<counts[i]<<' ';
	}
	return 0;
}
