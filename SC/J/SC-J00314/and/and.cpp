#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e6+10;
long long n,m,a[MAXN],sum=1;
int cmp(long long x,long long y){
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	sum=a[1];
	for(long long i=2;i<=m;i++){
		sum=(sum & a[i]);
	}
	cout<<sum<<endl;
	return 0;
}