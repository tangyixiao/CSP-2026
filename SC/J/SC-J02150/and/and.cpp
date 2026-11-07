#include<bits/stdc++.h>
#define int long long
//#define pi pair<int,int>
using namespace std;
const int mx=2e5+5;
int n,m,a[mx],vis[mx];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	freopen("and5.in","r",stdin);
//	freopen("q.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int f=0,ans=0;
	for(int j=30;j>=0;j--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if((vis[i]==f)&&((1<<j)&a[i])){
				cnt++;
			//	cout<<a[i]<<" "<<(1<<j)<<'\n';
				vis[i]++;
			}
		}
		if(cnt>=m){
			f++;
			ans+=(1<<j);
		//	cout<<"*";
		}
		else {
			for(int i=1;i<=n;i++){
				if((vis[i]==f+1)&&((1<<j)&a[i])){
					vis[i]--;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}