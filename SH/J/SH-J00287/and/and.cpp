#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ans = 0;
void dfs(int step,int num,int last){
	if(step > m){
		ans = max(ans,num);
		return;
	}
	if(num < ans || n - last < m - step)return;
	for(int i = last + 1;i <= n;i++){
		dfs(step + 1,num & a[i],i);
	}
}
bool cmp(int x,int y){
	return x > y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.ans","r",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	if(n <= 2000){
		if(m == n){
			ans = a[1];
			for(int i = 2;i <= n;i++){
				ans &= a[i];
			}
			cout<<ans;
		}
		else{
			for(int i = 1;i <= n;i++){
				dfs(2,a[i],i);
			}
			cout<<ans;
		}
	}
	else{
		sort(a + 1,a + n + 1,cmp);
		cout<<a[m];
	}
	return 0;
}
