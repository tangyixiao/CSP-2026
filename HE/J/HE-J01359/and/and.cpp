#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
//	scanf("%d%d",n,m);
	unsigned long long a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	stable_sort(a+1,a+n+1);
	long long sum=a[n-m+1];
	for(int i=n-m+2;i<=n;i++){
		sum=sum & a[i];		
	}
	cout<<sum;
//	int n,m;
//	cin>>n>>m;
//	scanf("%d%d",n,m);
	return 0;
}
