#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[200005][35],cnt[200005],flag[200005],tot,ans=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		for(int j=0;j<=29;++j){
			if((a[i]>>j)&1==1) b[i][j]=1,cnt[j]++;
		}
	}
	tot=n;
	for(int i=29;i>=0;--i){
		if(cnt[i]<m) continue;
		for(int j=1;j<=n;++j){
			if(flag[j]) continue;
			if(b[j][i]==0){
				flag[j]=1;
				tot--;
				for(int z=i-1;z>=0;z--){
					if(b[j][z]) cnt[z]--;
				}
			}
		}
		//cout<<i<<endl;
		if(tot==m) break;
	}
	//for(int i=1;i<=n;++i) cout<<flag[i]<<endl;
	for(int i=1;i<=n;++i){
		if(flag[i]==0){
			if(ans==-1) ans=a[i];
			else ans&=a[i];
		}
	}
	cout<<ans;
	return 0;
}