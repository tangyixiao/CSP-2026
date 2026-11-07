#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int dfs(int num,int an,int cnt){
	if(num>=m) return an;
	if(m-num>=cnt) return 0;
	int ans=0;
	for(int i=cnt;i>=1;i--)
		ans=max(ans,dfs(num+1,an&a[i],i-1));
	return ans;
}
void solve1(){
	int ans;
	for(int i=n;i>=1;i--)
		ans=max(ans,dfs(1,a[i],i-1));
	cout<<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//freopen("and.in","r",stdin);
	//freopen("and.txt","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(n<=10)
		solve1();
	return 0;
} 
