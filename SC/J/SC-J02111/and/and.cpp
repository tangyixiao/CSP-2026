#include<bits/stdc++.h>
using namespace std;
//按位与：^ 
int a[1000005]={};
int main()
{
	//消注释！！！！！！！！！！！！！ 
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m; 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int maxn=-1;
	int q,w,e;
	for(int i=1;i<=n;i++)
	{
		int x;
		int y[m+5],cnt=1;
		x=0;
		for(int j=1;j<=m;j++)
		{
			x^=a[j];
			y[cnt]=a[j];
			cnt++;
		}
		if(x>maxn)
		{
		maxn=x;
		q=y[1];
		w=y[2];
		e=y[3];
		}
	}
	cout<<maxn<<" "<<q<<" "<<w<<" "<<e;
	return 0;
}