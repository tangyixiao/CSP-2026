#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int a[N],rt[N];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int l=i;l<=n;)
		{
			bool ok=0;
			for(int k=l+1;k<=n;k++)
			{
				if(a[k]==a[l])
				{
					l=k;
					ok=1;
					break;
				}
			}
			if(ok==0)
			{
				rt[a[l]]++;
				l++;
			}
		}
	}
	for(int i=1;i<=m;i++)
		cout<<rt[i]<<" ";
	return 0;		
}