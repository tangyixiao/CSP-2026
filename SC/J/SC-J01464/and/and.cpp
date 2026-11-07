#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100005],ans=0,cnt=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cnt=a[i]&a[i+1];
		ans=max(ans,cnt);
	}
	cout<<cnt;
	return 0; 
} 