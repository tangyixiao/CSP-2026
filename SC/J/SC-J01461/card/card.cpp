#include<bits/stdc++.h>
using namespace std;
stack<int> q;
int n,m,a[500005],ans[300005],f[300005];
void solve(int x){
	for(int i=x;i<=n;i++){
		if(q.empty()){
			q.push(a[i]);
			f[a[i]]=1;
		}
		else if(f[a[i]]==0){
			q.push(a[i]);
			f[a[i]]=1;
		}
		else{
			while(q.top()!=a[i]){
				f[q.top()]=0;
				q.pop();
			}
		}
	}
	while(q.size()){
		ans[q.top()]++;
		f[q.top()]=0;
		q.pop();
	}
	return ;
}

int main(){
	freopen("card","r",stdin);
	freopen("card","w",stdout);
	cin>>n>>m;
	int cnt=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>1 && a[i]>=a[i-1]) cnt++;
	}
	
	if(n>5000 && cnt==n){
		for(int i=2;i<=n;i++){
			if(a[i]==a[i-1]) continue;
			else cout<<i-1<<" ";
		}
		cout<<n;
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) f[j]=0;
		solve(i);
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}