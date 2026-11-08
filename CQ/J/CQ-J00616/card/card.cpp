#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],t[300005],l[500005],wbj[500005],tp=0;
int main()
{
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		tp=0;
		memset(l,0,sizeof(l));
		memset(wbj,0,sizeof(wbj));
		for(int j=i;j<=n;j++)
		{
			int bj=0,lbj;
			for(int k=1;k<=tp;k++) if(l[k]==a[j]) lbj=k,bj=1;
			if(!bj) l[++tp]=a[j];
			else
			{
				for(int i=lbj;i<=tp;i++) l[i]=0;
				tp=lbj-1;
				l[++tp]=a[j];
			}
		}
		for(int j=1;j<=tp;j++)
		{
			if(wbj[l[j]]) continue;
			wbj[l[j]]=1;
			t[l[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<t[i]<<" ";
	return 0;
}
