#include<bits/stdc++.h>
using namespace std;
int n,m,maxans,l[200005];
int com(int r,int ans)
{
	if(r=0)
		return ans;
	int maxx=-1;
	for(int j=1;j<=n;j++)
		maxx=max(maxx,com(r-1,ans&l[j]));
	return maxx;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>l[i];
	for(int i=1;i<=n;i++)
		maxans=max(maxans,com(m,l[i]));
	cout<<maxans;
	return 0;
}
