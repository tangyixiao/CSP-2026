#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005],f[200005][35],sum[40],fl[200005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		int x=a[i],cur=0;
		while(x!=0){
			f[i][++cur]=x%2;
			sum[cur]+=x%2;
			x/=2;
		}
	}
	for(int i=30;i>=1;--i){
		if(sum[i]>=m){
			for(int j=1;j<=n;++j){
				if(f[j][i]==0&&fl[j]==0){
					fl[j]=1;
					for(int k=1;k<=30;++k){
						sum[k]-=f[j][k];
						f[j][k]=0;
					}
				}
			}
		}
	}
	int ans=2147483648-1;
	for(int i=1;i<=n;++i){
		if(fl[i]==1){
			continue;
		}
		ans&=a[i];
	}
	cout<<ans<<'\n';
	return 0;
}
