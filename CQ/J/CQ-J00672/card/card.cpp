#include<bits/stdc++.h>   //100+100+50(?)+gunmu=1=? 
using namespace std; //ccf牛逼，快把评测机弄快点 
int n,m,a[200005],bj[200005],ans[200005],xia[200005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		memset(bj,0,sizeof(bj)),memset(xia,0,sizeof(xia));
		for(int j=1;j<i;j++) bj[j]=true;
		for(int j=i;j<=n;j++)
		{
			if(xia[a[j]]&&!bj[xia[a[j]]])
			{
				for(int k=xia[a[j]];k<j;k++) bj[k]=true;
			}
			xia[a[j]]=j;
		}
		for(int j=i;j<=n;j++) ans[a[j]]+=(!bj[j])?1:0;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}//打的暴力，不知道能不能1= 
