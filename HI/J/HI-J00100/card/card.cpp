#include<bits/stdc++.h>
using namespace std;
int n,m,a[300005],dp[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		dp[a[i]]=i;
	}
	for(int i=1;i<=m;i++){
		printf("%d ",dp[i]);
	}
	return 0;
}
