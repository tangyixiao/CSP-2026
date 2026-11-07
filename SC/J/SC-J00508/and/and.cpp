#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;

int m,n;

struct node{
	int lo;
	int dou[33];
	int an;
};
node a[200005];

int andf(node x,node y){
	int ans=0;
	for(int i=min(x.lo,y.lo);i>=1;i--)
	{
		ans+=(x.dou[i]&&y.dou[i])<<i-1;
	}
	return ans;
}
int b[4000006];
bool vis[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].an;
		int cnt=0;
		int p=a[i].an;
		while(p>0)
		{
			a[i].dou[++cnt]=p%2;;
			p/=2;
		}
		a[i].lo=cnt;
	}
	int r=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++){
			b[++r]=andf(a[i],a[j]);
			cout<<i<<' '<<j<<' '<<andf(a[i],a[j])<<endl;
		}
	}
	sort(b+1,b+r+1);
	cout<<b[r];
	return 0;
}