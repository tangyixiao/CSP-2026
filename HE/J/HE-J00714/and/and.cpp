#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<long long> a;
long long ans = 0;
bool flag;
//       深度 还剩  目前ans 
void dfs(int u,int l,long long ans1){
	
	if(l == 0){
		if(ans < ans1){
			ans = ans1;
		}
		return;
	}
	if(u == m){
		return;
	}
	//不选 
	if(l < n-u+1){
		dfs(u+1,l,ans1);
	}
	//选 
	if(flag){
		ans = a[u];
		flag = 0;
	}
	else{
		ans1 =  ans1 & a[u];
	}
	dfs(u+1,l-1,ans1);
	return; 
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	a.push_back(0);
	for(int i = 1;i <= n;i++){
		a.push_back(0);
		cin>>a[i];
	}
	flag = 1;
	
	dfs(0,m,0);
	
	cout<<ans;
	return 0;
} 
