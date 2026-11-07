#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
int ans=0;
int m,n;
int x=1;
bool vis[N];

queue<int>q;
void dfs(int now,int cnt){
	if(cnt>m){
		int xx=x-1;
		while(q.size()){
			xx=(xx & q.front());
			q.pop();
		}
		ans=max(ans,xx);
		return ;
	}
	else{
		for(int i=now;i<=n;i++){
			if(!vis[i]){
				q.push(a[i]);
				vis[i]=1;
				dfs(i,cnt+1);
				vis[i]=0;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=30;i++){
		x*=2;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(n>2000){
		
		cout<<a[n-m+1];
		return 0;
	}
	else if(m==1){
		cout<<a[n];
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(a[i]&a[j]));
			}
		}
		cout<<ans;
		return 0;
	}
	else {
		vis[1]=1;
		q.push(a[1]);
		dfs(1,1);
		cout<<ans;
		
	}
	return 0;
}