#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5;

//struct node{
//	int l, r;
//}t[N];
//int cnt;

int n,m;
int a[N], ans[N];
int vis[N];
//vector<int> dp[N];
//bool cmp(node x,node y){
//	return x.l<y.l;
//}

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		stack<int>s;
		for(int j=1;j<=m;j++) vis[j]=0;
		for(int j=i;j<=n;j++){
			
			if(vis[a[j]]==0){
				vis[a[j]]++;
				s.push(a[j]);
			}
			else{
				while(s.size()&&s.top()!=a[j]){
					vis[s.top()]--;
					s.pop();
				}
				//cout<<s.top()<<" ";
			}
		}
		while(s.size()){
			//dp[s.top()].push_back(i);
			ans[s.top()]++;
			s.pop();
		}
	}
	
	/*
	for(int i=1;i<=n;i++){
		if(vis[a[i]]){
			t[++cnt].l=vis[a[i]];
			t[cnt].r=i-1;			
		}
		vis[a[i]]=i;
	}
	for(int i=1;i<=max(n,m);i++) vis[i]=0;
	sort(t+1,t+1+cnt,cmp);
	for(int i=1;i<=cnt;i++) vis[t[i].l]=i;
	for(int i=n;i;i--){
		if(t[vis[i]].l==0){
			while()
		} 
	}
	*/
//	for(int i=1;i<=n;i++){
//		for(auto j:dp[i]) cout<<j<<" ";
//		cout<<'\n';
//	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
//能覆盖到他的区间的左端点的最近点 
/*
10 3
3 1 2 1 3 2 3 1 2 1

*/