#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500030];
int ans[300030];
int cnt[300030];
int last[300030];
bool b=1;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		last[a[i]]=i;
		if(a[i]<a[i-1]){
			b=false;
		}
	}
	if(b==1){
		for(int i=1;i<=m;i++){
			cout<<last[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		memset(cnt,0,sizeof cnt);
		stack<int>s;
		for(int j=i;j<=n;j++){
			cnt[a[j]]++;
			if(cnt[a[j]]==2){
				while(s.top()!=a[j]){
					cnt[s.top()]--;
					s.pop();
				}
				cnt[s.top()]--;
				s.pop();
			}
			s.push(a[j]);
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
