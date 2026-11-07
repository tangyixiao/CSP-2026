#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int a[200010];
bool cmp(int x,int y)
{
	return x>y;
}
int main(){
    freopen("and.in",r,stdin);
	freopen("and.out",w,stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	int ans=1;
	for (int i=2;i<=m;i++)
	{
		if(i==2) ans=(a[i]&a[i-1]);
		else ans=(ans&a[i]);
	}
	cout<<ans;
	return 0; 
}
