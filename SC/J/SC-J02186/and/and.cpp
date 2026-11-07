#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 20,MAXXN = 2000 ,MAXXXN = 2e5+10;
int a[MAXXXN],n,m;
int ans = 0;
void dfs(int depth,int sum,int num){
	if(depth > n){
		if(num == m)
		ans = max(ans,sum);
		return;
	}
	dfs(depth+1,(sum & a[depth]),num+1);
	dfs(depth+1,sum,num);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	if(n <= MAXN){
		//int ans = 0;
		dfs(1,0x3f3f3f3f,0);
		cout<<ans;
		return 0;
	}
	else if(n <= MAXXN){
		if(m == 1){
			int maxn = -1;
			for(int i=1;i<=n;i++){
				maxn = max(a[i],maxn);
			}
			cout<<maxn;
			return 0;
		}
		else if(m == 2){
			int maxn = 0;
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					maxn = max(maxn,(a[i]&a[j]));
				}
			}
			cout<<maxn;
			return 0;
		}
		else if(m == n){
			int an = 0x3f3f3f3f;
			for(int i=1;i<=n;i++){
				an = (a[i] & an);
			}
			cout<<an;
			return 0;
		}
	}
	else if(n <= MAXXXN){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}
	return 0;
}