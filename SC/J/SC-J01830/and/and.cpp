#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[int(2e5+10)];
void dfs(int now,int step,string s){
	if (step==m){
		ans = max(ans,now);
		return ;
	}
	for (int i=1;i<=n;i++){
		if (s[i-1]=='0'){
			s[i-1] = '1';dfs(now&a[i],step+1,s);
		}
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;string s="",ss;
	for (int i=1;i<=n;i++)cin>>a[i],s+='0';
	for (int i=1;i<=n;i++){
		ss = s;
		ss[i-1]=1;
		dfs(a[i],1,ss);
	}
	cout<<ans;
	return 0;
}