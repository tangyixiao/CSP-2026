#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],k;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	k=a[n];
	for(int i=n;i>n-m;i--){
		k=k&a[i];
	}
	cout<<k;
	return 0;
 }
