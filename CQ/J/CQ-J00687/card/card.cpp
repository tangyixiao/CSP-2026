#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int h[10005];
int main()
{
	freopen("card.in","r","stdin");
	freopen("card.out","w","stdout");
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	long long num=0;
	cin>>n>>m;
	if(m==1) 
	{
		cout<<n;
		return 0;
	}
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		h[i]=n-i+1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=j-1;j++) 
			{
				if(a[k]==a[j]) h[i]--;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<h[i]<<" ";
	}
	
	return 0;
}
