#include<bits/stdc++.h>
using namespace std;  
#define int long long
const int x=2e5+10;
int n,m,a[x];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","r",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=n;i>=n-m+1;i--)
	{
	    a[n]=a[n]&a[i];
	}
	cout<<a[n];
	return 0;
}