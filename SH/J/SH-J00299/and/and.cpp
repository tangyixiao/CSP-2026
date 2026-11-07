#include<bits/stdc++.h>
using namespace std;
long long ans;
long long n,m;
long long a[200005];
bool cmp(long long b,long long c){
	return b>c;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	long long maxx=0;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	int ans=0;
	sort(a+1,a+n+1,cmp);
	for(long long i=1;i<=n-m+1;i++){
		int sum=a[i];
		for(long long j=i;j<=m+i-1;j++){
			sum&=a[j];
		}
		ans=max(ans,sum);
	}
	cout<<ans;
	return 0;
} 
