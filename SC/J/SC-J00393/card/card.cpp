#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int ans[500010];
int id[500010];
int t[500010];
int stk[500010];
int tot=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(!id[a[i]]){
			stk[++tot]=a[i];
			id[a[i]]=tot;
			t[a[i]]=i;
		}else{
			while(tot>id[a[i]]){
				ans[stk[tot]]+=t[stk[tot]]-i;
				t[stk[tot]]=id[stk[tot]]=0;
				tot--;
			}
		}
	}
	while(tot>0){
		ans[stk[tot]]+=t[stk[tot]];
		tot--;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}