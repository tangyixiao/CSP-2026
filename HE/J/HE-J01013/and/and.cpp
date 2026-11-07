#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010],tot = 0,ans = 0,le = 0,maxn = 0;
vector<int> e[40];
void dfs(int x,int sum,int tot){
	if(x>=e[le].size()+1){
		return;
	}
	if(tot<=0){
		maxn = max(maxn,sum);
		return;
	}
	for(int i = x+1;i<e[le].size()-tot+1;i++){
		dfs(i,sum&a[e[le][i]],tot-1);
	}
	return; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		tot = a[i];
		ans = 1;
		while(tot>0){
			if(tot%2==1){
				e[ans].push_back(i);
			}
			tot/=2;
			ans++;
		}
	}
	for(int i = 30;i>=1;i--){
		if(e[i].size()>=m){
			le = i;
			for(int j = 0;j<e[i].size()-m+1;j++){
				dfs(j,a[e[i][j]],m-1);
			}
			cout<<maxn;
			return 0;
		}
	}
	cout<<0;
	return 0;
}
