#include <bits/stdc++.h>
using namespace std;
const int MAXN=5e5+10;
int a[MAXN],n,m,ans[MAXN],cnt[MAXN],is_A=1;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],is_A=(i==1||a[i]>=a[i-1]);
	if(is_A){
		for(int i=1;i<=n;i++) cnt[a[i]]++;
		for(int i=2;i<=n;i++){
			cnt[a[i-1]]--;
			if(cnt[a[i]]) ans[a[i]]+=(ans[a[i]]?1:ans[a[i-1]]+1);
		}
		for(int i=1;i<=m;i++) cout<<ans[i]+1<<' ';
		return 0;
	}
	stack<int> s;
	for(int i=1;i<=n;i++){
		memset(cnt,0,sizeof(cnt));
		while(!s.empty()) s.pop();
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]) while(s.top()!=a[j]) cnt[s.top()]--,s.pop();
			else s.push(a[j]),cnt[a[j]]++;
		}
		for(int i=1;i<=m;i++) ans[i]+=!!(cnt[i]);
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
