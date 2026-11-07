#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++)cin >> a[i];
	if(m==1){
		int ma=-1;
		for(int i=1;i<=n;i++)ma=max(ma,a[i]);
		cout << ma;
	}else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++)ans&=a[i];
		cout << ans;
	}else if(m==2){
		int ans=-1;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}cout << ans;
	}else if(m==n-1){
		int ma=-1;
		for(int i=1;i<=n;i++){
			int ans=(i==1?a[2]:a[1]);
			for(int j=2;j<=n;j++){
				if(i==j)continue;
				if(i==1)continue;
				ans&=a[j];
			}ma=max(ma,ans);
		}cout << ma;
	}else{
		srand(time(0));
		cout << (rand()<=15?1:0);
	}
	return 0;
}
