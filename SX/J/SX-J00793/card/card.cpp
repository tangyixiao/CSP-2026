#include <bits/stdc++.h>
using namespace std;
int n,m;
int card[500005];
int table[300005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>card[i];
	}
	for(int i = 1;i<=n;i++)
	{
		for(int j = i;j<=n;j++)
		{
			if(table[card[j]]!=0)
			{
				for(int k = 1;k<=m;k++)
				{
					if(table[k]>table[card[j]])
					{
						table[k] = 0;
					}
					cout<<table[k]<<" ";
				}
				table[card[j]] = j;
				cout<<endl;
			}
		}
		memset(table,0,sizeof(table));
	}
	return 0;
}
