#include<bits/stdc++.h>
using namespace std;
int a[514514],cnt[514514],n,m;
//input
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		stack<int>stk;
		unordered_map<int,bool>mp;
		for(int j=i;j<=n;j++){
			if(mp[a[j]]==1){
				while(stk.top()!=a[j]){
					mp[stk.top()]=0;
					stk.pop();
				}
			}
			else stk.push(a[j]),mp[a[j]]=1;
		}
		while(!stk.empty()){
			cnt[stk.top()]++;
			stk.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
		//cout<<ans<<" ";
	}
	return 0;
}
//48pts is Very Easy
/*
CSP RP++
wo yao shang mi huo 
GT: New Horizons

*/
//348 pts
