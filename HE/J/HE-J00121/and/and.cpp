#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,q;
long long a[N];
long long dp[N];
long long l;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
	scanf("%d",&a[i]);
	dp[i]=0;
	}
	for(int i=1,cnt=1;i<=n;i++){	
	for(int j=1;j<=m;j++){
	a[cnt]&=a[++cnt];
	}
	dp[i]=max(dp[i-1],a[cnt]);
    } 
	cout<<dp[n];
	return 0;
}
