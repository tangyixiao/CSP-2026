#include<bits/stdc++.h>
using namespace std;
int n,m,fin[300005],ldr[300005],cards[300005];
bool have[300005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>cards[i];
	}
	fill(ldr+1,ldr+m+1,-1);
	for(int i=n;i>=1;i--)
	{
		if(ldr[cards[i]]!=-1)
		{
			int j=ldr[cards[i]]-1;
			while(cards[i]!=cards[j])
			{
				have[cards[j]]=false;
				ldr[cards[j]]=-1;
				j--;
			}
		}
		ldr[cards[i]]=i;
		have[cards[i]]=true;
		for(int j=1;j<=m;j++)
		{
			if(have[j]) fin[j]++;
			//if(have[3]) cout<<i<<"\n";
		}
	}
	for(int i=1;i<m;i++)
	{
		cout<<fin[i]<<" ";
	}
	cout<<fin[m];
	return 0;
}
