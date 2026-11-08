#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],o[500005],dp[500005];
int b[300005];
bool f=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		dp[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			o[dp[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<o[i]<<" ";
	}
	return 0;
}
