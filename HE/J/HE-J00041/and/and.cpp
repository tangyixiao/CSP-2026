#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[2000007];
priority_queue<int>q;
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool f=1;
	int ans=0;
	priority_queue<int>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		q.push(a[i]);
		if(a[i]!=i-1)
			f=0;
	}
	if(m==1){
		cout<<q.top();return 0;
	}	
	if(m==n){
		int ans=a[1];
			for(int i=1;i<=n;i++)
				ans&=a[i];
		cout<<ans;
		return 0;
	}	
	if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i)continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}	
	if(f||n%2==0){
		int ans=q.top();
		for(int i=1;i<=m;i++){
			ans&=q.top();
			cout<<ans<<' '<<q.top()<<'\n';
			q.pop();
		}
		cout<<ans;
		return 0;
	}
	if(n<=20){
		int ans=q.top();
		for(int i=1;i<=m;i++){
			ans&=q.top();
			q.pop();
		}
		cout<<ans;
		return 0;
	}
	return 0;
}
