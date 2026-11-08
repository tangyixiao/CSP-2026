#include<bits/stdc++.h>
using namespace std;
#define _sandspiel_club_fun_ 1=
int n,m,dp[200005],a[200005],xxx,maxx,bj[31][2],t,k,bong,maxa,a33333,a22222;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m>>a[1],xxx=a[1];
	for(int i=2;i<=n;i++)
	{
		cin>>a[i],xxx=xxx&a[i],t=a[i],k=log2(a[i]),bong=(a[i]!=i-1)?1:0,maxa=max(maxa,a[i]);
		if(a[i]==3) a33333++;
		if(a[i]==2) a22222++;
		while(t>=1) bj[k][t%2]++,k--,t/=2;
	}
	if(m==1) cout<<maxa;
	else if(m==n) cout<<xxx;
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j) maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
	}else if(m==n-1)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<=log2(a[i]);j++) bj[j][(a[i]>>j)%2]--;
			int now=0;
			for(int j=0;j<=30;j++) now+=(bj[j][0]==0)?pow(2,j):0;
			maxx=max(maxx,now);
		}
		cout<<maxx;
	}else if(maxa<4)
	{
		if(a33333>=m) cout<<3;
		else if(a33333+a22222>=m) cout<<2;
		else cout<<1;
	}else if(!bong) sort(a+1,a+1+n),cout<<a[n-1]<<endl;
	return 0;
}
