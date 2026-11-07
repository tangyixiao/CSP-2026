#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],maxx=0,vis[25],v[6];
void dfs(int now,int cnt){
	if(now==n+1){
		if(cnt==m){
			int xxx=0;
			for(int i=1;i<=n;i++){
				if(vis[i]==1){
					xxx=a[i];
					for(int j=i+1;j<=n;j++){
						if(vis[j]==1){
							xxx&=a[j];
						}
					}
					break;
				}
			}
			maxx=max(maxx,xxx);
		}
		return ;
	}
	if(cnt>m){
		return ;
	}
	vis[now]=1;
	dfs(now+1,cnt+1);
	vis[now]=0;
	dfs(now+1,cnt);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	bool flag=true;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(a[i]>4){
			flag=false;
		}
	}
	if(m==1){
		cout << 0;
	}
	else if(n<=20){
		dfs(1,0);
		cout << maxx;
	}
	else if(n<=2000){
		if(m==1){
			cout << 0;
		}
		else if(m==n){
			int ans=a[1];
			for(int i=2;i<=n;i++){
				ans&=a[i];
			}
			cout << ans;
		}
		else if(m==2){
			int ans=0;
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					ans=max(ans,a[i]&a[j]);
				}
			}
			cout << ans;
		}
	}
	else if(flag==true){
		for(int i=1;i<=n;i++){
			v[a[i]]++;
		}
		if(v[4]>=m){
			cout << 4;
		}
		else if(v[3]>=m){
			cout << 3;
		}
		else if(v[2]+v[3]>=m){
			cout << 2;
		}
		else if(v[1]+v[3]>=m){
			cout << 1;
		}
		else{
			cout << 0;
		}
	}
	else{
		sort(a+1,a+n+1,[](int x,int y){
			return x>y;
		});
		int ans=a[1];
		for(int i=2;i<=m;i++){
			ans&=a[i];
		}
		cout << ans;
	}
	
	
	return 0;
} 
