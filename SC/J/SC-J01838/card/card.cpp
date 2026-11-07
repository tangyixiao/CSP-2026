#include<bits/stdc++.h>
using namespace std;
long long int a[500001],tong[500001],ans[300001],s[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(false),cout.tie(false);
	long long int n,m;cin>>n>>m;
	for(long long int i=1;i<=n;i++) cin>>a[i];
	for(long long int i=1;i<=n;i++){
		memset(tong,0,sizeof(tong));
		memset(s,0,sizeof(s));
		long long int tong_cnt=0;
		for(long long int j=i;j<=n;j++){
			long long int flag=0;
			for(long long int k=tong_cnt;k>=1;k--)
				if(tong[k]==a[j]) flag=k;
			if(flag!=0) tong_cnt=flag-1;
			tong[++tong_cnt]=a[j];
		}
		for(long long int i=1;i<=tong_cnt;i++) s[tong[i]]=1;
		for(long long int i=1;i<=m;i++) ans[i]+=s[i];
	}
	for(long long int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}