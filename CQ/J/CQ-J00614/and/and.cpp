#include<bits/stdc++.h>
using namespace std;
namespace melk{
	int a[500005];
	void solve(){
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int ans=-1e9;
		if(m==1){
			for(int i=1;i<=n;i++){
				ans=max(ans,a[i]);
			}
		}
		else if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(i==j)continue;
					ans=max(ans,a[i]&a[j]);
				}
			}
		}
		else if(ans==n){
			ans=a[1];
			for(int i=2;i<=n;i++){
				ans=ans&a[i];
			}
		}
		cout<<ans;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	melk::solve();
	return 0;
}
