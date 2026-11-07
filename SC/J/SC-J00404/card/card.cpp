#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,a[500010],l[500010],cnt[500010],top;
void add(int k){
	for(int i=top;i>=1;i--){
		if(l[i]==k){
			top=i-1;break;
		}
	}
	l[++top]=k;return;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int o=1;o<=n;o++){
		memset(l,0,sizeof(l));top=0;
		for(int i=o;i<=n;i++){
			add(a[i]);
		}
		for(int i=1;i<=top;i++)cnt[l[i]]++;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	return 0;
}