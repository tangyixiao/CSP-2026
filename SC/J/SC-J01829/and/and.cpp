#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int ans=-100;
bool vis[200010];
set<int>s;
int tt=1;
void dfs(int st,int sum){
	if(st==m){
		ans=max(ans,sum);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]) continue;
		vis[i]=1;
		dfs(st+1,sum&a[i]);
		vis[i]=0;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=20;i++){
		s.insert(tt*2-1);
		tt*=2;
	}
	bool fl=1;
	cin>>a[1];
	int t_ans=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		t_ans=t_ans&a[i];
		if(s.find(a[i])==s.end()&&fl) fl=0;
	} 
	if(fl){
		sort(a+1,a+n+1,greater<int>());
		int sum=a[1];
		for(int i=2;i<=m;i++){
			sum=sum&a[i]; 
		}
		cout<<sum;
		return 0;
	}
	if(m==1){
		cout<<*max_element(a+1,a+n+1);
		return 0; 
	}else if(m==n){
		cout<<t_ans;
		return 0;
	}else{
		for(int i=1;i<=n;i++){
			vis[i]=1;
			dfs(1,a[i]);
			vis[i]=0;
		}
		cout<<ans;
		return 0;
	}
}