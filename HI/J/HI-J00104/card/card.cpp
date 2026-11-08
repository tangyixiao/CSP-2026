#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],dp[500005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		
		int ent=0;
		for(int j=i;j<=n;j++){
			for(int l=1;l<=ent;l++){
				if(dp[l]==a[j]){
					for(int p=l;p<=ent;p++){
						dp[p]=0;
					}
					ent=l-1;
					break;
				}
			}
			ent++;
			dp[ent]=a[j];
		}
		for(int j=1;j<=ent;j++){
			b[dp[j]]++;
			dp[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}

