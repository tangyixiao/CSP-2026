#include <bits/stdc++.h>
using namespace std;
const int N=1e6;
int n,m,t;
int k[N],q[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>k[i];
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=i;j<=n;j++)
		{
			q[k[j]]++;
			if(q[k[j]]>i)
			{
				for(int s=1;s<=m;s++)
				{
					
					if(k[s]==k[j]){
						t=s;
						break;
					}
				}
				for(int l=t;l<j;l++)
				{
					q[k[l]]--;
				}
			}
			
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<q[i]<<" ";
	}
	return 0;
}