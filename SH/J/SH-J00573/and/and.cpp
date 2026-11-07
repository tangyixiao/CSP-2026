#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200001],ans=0;
vector<int> stk;
void dfs(int x,int cnt){
	//x表示当前看到了哪里，cnt表示已选几个 
	if(x>n){
		if(cnt==m){
			int sum=stk[0];
		//	cout<<stk[0]<<' ';
			for(int i=1;i<stk.size();i++){
				//cout<<"sum="<<sum<<'|';
				sum=sum&stk[i];
				//cout<<stk[i]<<'='<<sum<<endl;
			}
			ans=max(ans,sum);
		}
		return;
	}
	//cout<<endl;
	stk.push_back(a[x]);
	dfs(x+1,cnt+1);
	stk.pop_back();
	dfs(x+1,cnt);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1,0);
	cout<<ans<<endl;
	return 0;
}
