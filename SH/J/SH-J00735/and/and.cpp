#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m;
int a[N];
long long ans=-1e18;
void BFS(int u,int cnt,long long sum){
	if(u==n){
		if(cnt==m)ans=max(ans,sum);
		return;
	}
	BFS(u+1,cnt,sum);
	BFS(u+1,cnt+1,sum&a[u+1]);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	long long b=0;
	for(int i=0;i<=30;i++){
		b=b+(1<<i);
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			b=b&a[i];
		}
		cout<<b;
		return 0;
	}
	BFS(0,0,b); 
	cout<<ans;
	return 0;
}
