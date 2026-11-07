#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],ans;
bool f[200005];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(f[j]==0&&(a[j]&(1<<i))==(1<<i)){
				cnt++;
			}
		}
		if(cnt>=m){
			ans+=(1<<i);
			for(int j=1;j<=n;j++){
				if(f[j]==0&&(a[j]&(1<<i))==0){
					f[j]=1;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}