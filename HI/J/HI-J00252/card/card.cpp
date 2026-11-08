#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int t=1;
	while(t<=n){
		stack<int>s;
		int cnt[m+1]={0};
		for(int i=t;i<=n;i++){
			if(cnt[a[i]]!=0){
				while(s.top()!=a[i])cnt[s.top()]--,s.pop();
			}else{
				cnt[a[i]]++;
				s.push(a[i]);
			}
		}
		for(int i=1;i<=m;i++)ans[i]+=cnt[i];
		t++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
