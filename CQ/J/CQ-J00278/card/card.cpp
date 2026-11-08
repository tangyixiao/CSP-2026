#include<bits/stdc++.h>
using namespace std;
int a[500123],b[500123],y[300123],ans[500123],pd[500123],ys[500123];
int main()
{
	//*
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//*/
	//*
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//*/
	int n,m;
	cin>>n>>m;
	for(int q=1;q<=n;q++)
	{
		cin>>b[q];
	}
	if(m==2)
	{
		for(int q=1;q<=n;q++)
		{
			if(b[q]==b[n]) ans[b[q]]++;
			else ans[1]++,ans[2]++;
		}
		cout<<ans[1]<<' '<<ans[2];
		return 0;
	}
	int nn=1;
	b[0]=-1;
	for(int q=1;q<=n;q++)
	{
		if(b[q]!=b[q-1]) ys[nn]=q,a[nn++]=b[q];
	}
	nn--;
	for(int q=1;q<=nn;q++)
	{
		int pdd=1;
		for(int w=q;w<=nn;w++)
		{
			if(y[a[w]])
			{
				for(int e=y[a[w]]+1;e<pdd;e++) y[pd[e]]=0;
				pdd=y[a[w]]+1;
			}
			else
			{
				y[a[w]]=pdd;
				pd[pdd]=a[w];
				pdd++;
			}
		}
		int cs=0;
		for(int w=ys[q];w<=n&&b[w]==b[ys[q]];w++) cs++;
		//cout<<cs<<' ';
		for(int w=1;w<=m;w++)
		{
			if(y[w])
			{
				ans[w]+=cs;
				y[w]=0;
			}
		}
	}
	for(int w=1;w<=m;w++) cout<<ans[w]<<' ';
	return 0;
}
/*
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
freeopen("card.in","r",stdin);freeopen("card.out","w",stdout);
*/
/*
me want shang mi huo xing wei da shang
awa awa
my hao is *******,i not want say

i love CCF
*/
