#include<bits/stdc++.h>
using namespace std;
//按位与：^ 
int c[500005]={},a[500005]={},tong[500005]={};
int n,m;
int find(int a[],int x)
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]==x)
		return 1;
	}
	return 0;
}
void find2(int a[],int x,int &cnt)
{
	for(int i=1;i<=cnt;i++)
	{
		if(a[i]==x)
		{
			cnt=i;
		}
	}
}
int main()
{
	//删注释！！！！！！！！ 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	const int X=n;
	const int Y=m;
	int cntx[X][Y];
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	int cnt=1;
	int j;
	for(int i=1;i<=m;i++)
	{
		for( j=n-i+1;j<=n;j++)
		{
			if(find(a[500005],c[j])==0)
			{
			a[cnt]=c[j];	
			}
			if(find(a[],c[j])==1)
			{
				find2(a[],c[j],cnt);
				a[cnt]=c[j];
			}
		 } 
		 for(int z=1;z<=m;z++)
		 {
		 	if(find(a[],j)==1)
		 	cntx[i][z]++;
		 }
	 } 
	 for(int i=1;i<=m;i++)
	 {
	 	cout<<cntx[i][z]<<" ";
	 }
	 return 0;
}