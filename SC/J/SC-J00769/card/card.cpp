#include<bits/stdc++.h>
using namespace std;
int dp[500005],a[500005],n,m,last[300005],zj[500005],tot[500005],flag[500005];
long long ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
		if(last[a[i]]!=0){
			zj[last[a[i]]]=i;
			if(flag[i]==0)flag[last[a[i]]]=0;
			int j=last[a[i]]-1;
			while(zj[j]==0&&j>=1){
				if(j!=last[a[i]]){
					flag[j]=1;
				}
				zj[j]=last[a[i]];
				j--;
			}
			last[a[i]]=i;
		}else{
			last[a[i]]=i;
		}
	}
	int k=n;
	while(zj[k]==0)k--;
	for(int i=k+1;i<=n;++i){
		dp[i]=i;
		tot[i]=1;
	}
	for(int i=k;i>=1;--i){
		dp[i]=dp[zj[i]];
		tot[dp[i]]++;
	}
	for(int i=k+1;i<=n;++i){
		for(int j=i;j<=n;++j){
			ans[a[j]]+=(0LL)+(tot[i]);
		}
	}
	for(int i=k;i>=1;--i){
		if(flag[zj[i]]==1)flag[i]=1;
	}
	for(int i=1;i<=k;++i){
		int j=i;
		while(flag[j]==1){
			ans[a[j]]++;
			j++;
		}
	}
	for(int i=1;i<=m;++i){
		printf("%lld ",ans[i]);
	}
	return 0;	
}