#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5+5;
int n,m;
int a[N],cnt[N];
int c[N],kk[N];
int b[N];
void solve(int x){
	int r = 0;
	for(int i = x;i<=n;i++){
		for(int j = 1;j<=r;j++){
			if(b[j]==a[i]){
				r = j-1;
				break;
			}
		}
		b[++r] = a[i];
	}
	for(int i = 1;i<=r;i++){
		cnt[b[i]]++;
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int f = 1;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) f = 0;
	}
	if(f==1){
		for(int i = n;i>=1;i--){
			c[a[i]]++;
			kk[a[i]] = i;
		}
		int tot = unique(a+1,a+n+1)-a-1;
		for(int i = 1;i<=tot;i++){
			cout<<kk[i]+c[i]-1<<' ';
		}
		cout<<'\n';
		return 0;
	}
	for(int i = 1;i<=n;i++){
		solve(i);
	}
	for(int i = 1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	cout<<'\n';

	return 0;
}
