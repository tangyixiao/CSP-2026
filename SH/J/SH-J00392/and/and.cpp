#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,b[200010],ans,d[200010];
struct node{
	int oc,bi;
}a[200010];
void otb(int x,int bi,int c)
{
	int ws=pow(10,c);
	b[bi]=b[bi]+(x%2)*ws;
	if(x<=1) return;
	otb(x/2,bi,c+1);
}

bool cmp(node x,node y)
{
	return x.bi>y.bi;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].oc;
		otb(a[i].oc,i,0);
		a[i].bi=b[i];
	}
	sort(a+1,a+n+1,cmp);
	ans=a[1].oc;
	for(int i=1;i<=m;i++)
	{
		//cout<<a[i].oc<<" "<<a[i].bi<<endl;
		ans=ans&a[i].oc;
	}
	cout<<a[m].oc;
	return 0;
}
