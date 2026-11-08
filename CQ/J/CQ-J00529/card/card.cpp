#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10001]={0};
	int n,m;
	cin>>n>>m;
	int b[10001]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int j=n;
	int u=1;
	while(j--)
	{
		int h[10001]={0};
		for(int i=1;i<=n;i++)
		{
			h[i]=a[i];
		}
		for(int i=u;i<=n;i++)
		{
			for(int k=i-1;k>=u;k--)
			{
				if(h[i]==h[k])
				{
					for(int l=k;l<=i-1;l++)
					{
						h[l]=0;
					}
				}
			}
		}
		for(int i=u;i<=n;i++)
		{
			b[h[i]]++;
		}
		u++;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	
	return 0;
}
