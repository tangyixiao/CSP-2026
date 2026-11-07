#include<bits/stdc++.h>
#define int long long 
using namespace std;
int s[200010],n,m,ans=0;
//priority_queue<int> pq;
//priority_queue<int,vector<int>,greater<int> > p;
queue<int> p;
void dfs(int depth,int cnt){
	if(depth>n) return;
	if(cnt==m){
//		while(!p.empty()) cout<<p.front()<<' ',p.pop();
		vector<int> v(m);
//		while(!p.empty()) v.push_back(p.front()),cout<<p.front()<<' ',p.pop();
//		cout<<'\n';
		int sum=v[0];
		for(int i=1;i<=v.size();i++){
			sum&=v[i];
		}
		ans=max(ans,sum);
		return;
	}
	int q=0;
	p.push(s[depth]),dfs(depth+1,cnt+1);
//	p.pop();
	dfs(depth+1,cnt);
	return;
}
signed main(){	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>s[i];
	sort(s+1,s+n+1);
	if(m==1) ans=s[n];//5
	else if(m==2){//15
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(s[i]&s[j]));
			}
		}
	} else if(n==m){//5
		ans=s[1];
		for(int i=2;i<=n;i++) ans&=s[i];
	} else if(m==n-1){
		int sum=s[1];
		for(int i=1;i<=n;i++){
			for(int j=2;j<=n;j++){
				if(i!=j) sum&=s[j];
			}
			ans=max(ans,sum);
			sum=s[1];
		}
	} else dfs(1,0);
	cout<<ans;
	return 0;
}