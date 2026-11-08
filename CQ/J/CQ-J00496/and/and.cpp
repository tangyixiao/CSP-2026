#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],cnt2[31],mark[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			if(a[i]&(1<<j)){
				cnt2[j]++;
			}
		}
	}
	int ans=0;
	for(int i=30;i>=0;i--){
		if(cnt2[i]>=m){
			for(int j=0;j<=30;j++){
				cnt2[j]=0;
			}
			for(int j=1;j<=n;j++){
				if((a[j]&(1<<i))==0){
					mark[j]=1;
				}
				if(!mark[j]){
					for(int k=0;k<=30;k++){
						if(a[j]&(1<<k)){
							cnt2[k]++;
						}
					}
				}
			}
			ans+=(1<<i);
		}
	}
	cout<<ans;
	return 0;
}
