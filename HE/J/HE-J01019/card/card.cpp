#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+10;
const int M=3e2+10;
int n,m,a[N],record[M];
//
signed main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		bool b[M]={};
		int pos[M]={},now,no[N];
		for(int j=i;j<=n;j++)
		{
			if(b[a[j]])
			{
				for(int k=pos[a[j]];k<=now;k++)
				{
					no[k]=0;
				}
				b[a[j]]=0;
				now=pos[a[j]]-1;
				
			}
			else
			{
				b[a[j]]=1;
				pos[a[j]]=j;
				no[j]=a[j];
				++now;
			}
			
		}
		for(int j=1;j<=now;j++)
		{
			record[no[j]]++;
		}
		
	}
	for(int i=1;i<=n;i++)
	{
		cout<<record[i]<<" ";
	}
	return 0;
}
