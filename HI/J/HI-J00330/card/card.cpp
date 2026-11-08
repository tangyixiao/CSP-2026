#include<bits/stdc++.h>
using namespace std;
int a[300005];
int shu[300005];
int e[300005];
int l[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n=0,m=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		shu[ a[i]-1 ]=1;
	} 
	for(int i=0;i<m;i++)
	{
		for(int j=i,q=i;j<n;j++,q++)
		{
			if(q!=0 && a[j]==l[q-1])
			{
				for(int z=0;z<=q-1;z++)
				{
					l[z]=0;
				}
				q--;
			}
			l[q]=a[j];
		}
		for(int j=0;j<300005;j++)
		{
			if(l[j])
			{
				e[ l[j]-1 ]++;
			}
		}
	}
	for(int i=0;i<300005;i++)
	{
		if(shu[i])
		{
			cout<<e[i]<<" ";
		}
	}
	return 0;
}
