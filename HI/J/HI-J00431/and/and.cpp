#include<bits/stdc++.h>
using namespace std;
long long  a[20000000];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//.....
	int n,m;
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int cnt=a[n-m];
	for(int i=n-m+1;i<=n;i++){
		cnt=cnt&a[i];
	}
	cout<<cnt;
	return 0;
}
