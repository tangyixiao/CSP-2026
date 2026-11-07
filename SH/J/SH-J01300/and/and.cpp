# include <bits/stdc++.h>
# define ull long long
# define MAXN 200010
using namespace std;
queue<ull> qu;
ull n,m;
ull ans;
ull a[MAXN];
/*
void dfs(ull x, ull siz){
	//cout<<"Ñ¡"<<x<<" "<<siz<<"\n";
	if(siz == m){
		ull tmp = qu.front();
		//cout<<"Í·"<<qu.front()<<"\n";
		qu.pop();
		for(int i = 1; i < m; i++){
			tmp &= qu.front();
			//cout<<"Ñ­ÄÚ"<<qu.front()<<" "<<tmp<<"\n";
			qu.pop();
		}
		//cout<<ans<<" "<<tmp<<"\n";
		ans = max(ans, tmp);
		return;
	}
	if(x == n) return;
	dfs(x + 1,siz);
	qu.push(a[x]);
	dfs(x + 1,siz + 1);
}
*/
bool cmp(int a,int b){
	return a > b;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1; i <= n; i++) cin>>a[i];
	//dfs(1,0);
	sort(a+1,a+n+1,cmp);
	ans = a[1];
	for(int i = 1;i < m; i++) ans &= a[i + 1];
	cout<<ans;
	return 0;
} 
