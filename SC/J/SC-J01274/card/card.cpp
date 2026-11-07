#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[500005];
int t[300005]={0};
int ans[300005]={0};
int n,m;
void cx(int c){
	stack<int> p;
	for(int i=c;i<=n;i++){
		if(t[a[i]]==0){
			p.push(a[i]);
			t[a[i]]++;
		}
		else{
			while(p.top()!=a[i]) p.pop();
		}
	}
	while(p.size()!=0){
		ans[p.top()]++;
		p.pop();
	}
	for(int i=1;i<=m;i++) t[i]=0;
	return;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cx(i);
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}