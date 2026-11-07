#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdin);
	int n,m,a[200001],ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	n=min(32,n);
	int l=1,r=m;
	while(r<=n)
	{
		int x=a[l];
		for(int i=l+1;i<=r;i++) x=(x & a[i]);
		ans=max(ans,x);
		l++;
		r++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 