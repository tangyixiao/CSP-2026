#include<bits/stdc++.h>
//#define int long long
//#define pi pair<int,int>
using namespace std;
const int mx=5e5+5,mn=3e5+5;
int n,m,a[mx],ans[mn],c[mn],vis[mn];
set<int> s[mn];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//	freopen("card4.in","r",stdin);
//	freopen("q.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	int we=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])we=1;
	}
	if(!we){
		for(int i=n;i>=1;i--){
			if(!ans[a[i]]){
				ans[a[i]]=i;
			}
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		return 0;
	}
	for(int i=n;i>=1;i--){
		if(!vis[a[i]]){
			vis[a[i]]=i;
			s[a[i]].insert(i);
			c[a[i]]=i;
		}
		else {
			s[a[i]].insert(i);
		}
	}
	for(int j=1;j<=n;j++){
		queue<int> q;
		for(int i=j;i<=n;){
			q.push(a[i]);
			if(c[a[i]]==i)i=i+1;
			else i=c[a[i]]+1;
		}
		while(!q.empty()){
			ans[q.front()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}