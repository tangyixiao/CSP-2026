#include<bits/stdc++.h>
using namespace std;
const int N=5005+5;
int n,m;
int a[N],d[N],f[N],k[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int v=1;v<=n;v++)
	{
		for(int i=1;i<=m;i++)d[i]=0;
	for(int i=v;i<=n;i++){
		if(d[a[i]]==0){
			d[a[i]]=i;
		}
		else
		{
			for(int j=d[a[i]];j<=i;j++){
				d[a[j]]=0;
			}
			d[a[i]]=i;
		}
	}
			for(int j=1;j<=m;j++)if(d[j]!=0)k[j]++;
}
	for(int i=1;i<=m;i++){
		cout<<k[i]<<" ";
	}
}
