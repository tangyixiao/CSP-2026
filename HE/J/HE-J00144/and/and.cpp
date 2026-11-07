#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[2000005];
long long b[2000005];
long long sum=0;
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(long long i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	b[1]=a[1];
	for(long long i=1;i<=n;i++){
		for(long long j=2;j<=m;j++){
			b[i]&=a[j];
		}
		sum+=b[i];
	}
	cout<<sum;
	return 0;
}

