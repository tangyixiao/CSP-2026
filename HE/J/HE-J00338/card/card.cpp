#include<iostream>
#include<cstdio>
using namespace std;
int n,m,k,ji[300010],p[500010],zh;//zhu;
bool zbz[300010];
int main()
{
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>p[i];
		if(!zbz[p[i]])zbz[p[i]]=true;
		else 
		{
			for(int k=1;k<=m;k++)zbz[k]=false;
			zbz[p[i]]=true;
			zh=i;
		}
	}
/*	for(int i=zh-1;i>=1;i--)
	{
		if(p[zh]=p[i])
		{
			zhu=i;
			break;
		}
	}*/
	for(int i=zh;i<=n;i++)ji[p[i]]+=zh*(n-i);
	for(int i=zh+1;i<=n;i++)ji[p[i]]+=i-zh;
	for(int i=1;i<=m;i++)cout<<ji[i]<<' ';
}
