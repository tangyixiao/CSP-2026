#include<bits/stdc++.h>
#define ul unsigned long long
using namespace std;
const int N(2e5 + 10);
int n,m;
bool vis[N];
ul ma[N];
ul ans;
void dfs(int ce,int pos,ul sum){
	if(ce == m){
		ans = max(ans,sum);
		return; 
	}
	else if(pos > n){
		return;
	}
	if(vis[pos] != true){
		vis[pos] = true;
		dfs(ce + 1,pos + 1,sum ^ ma[pos]);
		vis[pos] = false;
//		dfs(ce,pos += 1,sum);
	}
//	return;
}
//5 3
//31 3 1 15 7
//5 3 
//31 3 1 15 7
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>ma[i];
	}
	vis[1] = true;
	dfs(1,1 + 1,ma[1]);
	cout<<ans;
	return 0;
}
//1 ^ 2;