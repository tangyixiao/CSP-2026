#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=5e5+5;
int n, m, a[maxn], xid[maxn], s[maxn], top, ans[maxn];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		top=0;
		for(int j=1;j<=m;j++){
			xid[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(xid[a[j]]==0){
				s[++top]=a[j];
				xid[a[j]]=top;
			}else{
				int lb=xid[a[j]];
				while(top>=lb){
					xid[s[top]]=0;
					--top;
				}
				s[++top]=a[j];
				xid[a[j]]=top;
			}
		}
		while(top){
			ans[s[top--]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
T:O(n^2)
M:16240 KB
*/
