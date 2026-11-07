#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
bool vis[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	int ans=0;
	int past=0,cur=0;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(ans<a[i]){
			cur=i;
			vis[past]=0;
			vis[cur]=1;
			past = cur;
			ans = a[i];
		}
	}
	if(m==1){
		cout << ans;
		return 0;
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	else if(m==2){
		ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans = max(ans,a[i]&a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	for(int i=2;i<=m;i++){
		past=0,cur=0;
		int tmp=-1;
		for(int j=1;j<=n;j++){
			if(!vis[j]){
				if(tmp<(ans&a[j])){
					cur=j;
					vis[past]=0;
					vis[cur]=1;
					past = cur;
					tmp = (ans&a[j]);
				}
			}
		}
		ans = tmp;
	}
	cout << ans;
	return 0;
} 

