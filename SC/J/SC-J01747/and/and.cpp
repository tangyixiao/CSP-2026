#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N=2e5+30;

int a[N][33];
int ans[33];
bool mk[N];
int n,m;

void dfs(int ord){
	if(ord<0){
		return;
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!mk[i]){
			continue;
		}
		if(a[i][ord]){
			cnt++;
		}
	}
	if(cnt>=m){
		ans[ord]=1;
		for(int i=1;i<=n;i++){
			if(!a[i][ord]){
				mk[i]=0;
			}
		}
	}
	dfs(ord-1);
	return;
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int ai;
		cin>>ai;
		int cnt=0;
		while(ai){
			if(ai&1){
				a[i][cnt]=1;
			}
			cnt++;
			ai>>=1;
		}
	}
	for(int i=1;i<=n;i++){
		mk[i]=1;
	}
	dfs(29);
	int out=0;
	for(int i=0;i<=29;i++){
		if(ans[i]==0){
			continue;
		}
		out+=pow(2,i);
	}
	cout<<out<<'\n';
	return 0;
} 