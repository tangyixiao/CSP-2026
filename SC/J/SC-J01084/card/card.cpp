#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],f[500005],sum[500005],cnt[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	while(n--){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(sum[a[j]]==1){
					for(int k=0;k<500005;k++)sum[k]=0;
				}
				sum[a[j]]++;
			}
			for(int j=i;j<=n;j++){
				if(f[a[j]]==1)continue;
				cnt[a[j]]+=sum[a[j]];
				f[a[j]]=1;
			}
			for(int i=0;i<=500004;i++)f[i]=0;
		}
	}
	for(int j=1;j<=m;j++){
		cout<<cnt[a[j]]<<" ";
	}
	return 0;
}