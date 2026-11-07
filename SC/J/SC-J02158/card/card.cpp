#include<bits/stdc++.h>
using namespace std;
const int N=500100;
int n,m;
int a[N];
int ans[N];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
		cin>>a[i];
	
	for(int i=1;i<=n;i++)
	{
		int c[N]={0},b[N]={0},k=0;//模拟栈
		for(int j=i;j<=n;j++)
		{
			c[a[j]]++;
			if(c[a[j]]==1)
				b[++k]=a[j];
			else
			{
				c[a[j]]--;
				while(b[k]!=a[j]&&k>=2)
				{
					c[b[k]]--;
					k--;
				}
			}
		}
		for(int j=1;j<=k;j++)
			ans[b[j]]++;
	}
	//输出
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<' ';
	return 0;
} 