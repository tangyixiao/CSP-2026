#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500005];
int ans[500005];
void solveA() {
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			ans[a[j]]++;
		}
	}
}
void solveB() {
	for(int i=1; i<=n; i++) {
		int last[500005]= {0};
		for(int j=i; j<=n; j++) {
			if(!last[a[j]])last[a[j]]=j;
			else {
				for(int k=last[a[j]]+1; k<=j; k++) {
					if(a[k]!=a[j])
						last[a[k]]=0;
				}
			}
		}
		for(int k=1; k<=m; k++) {
			if(last[k])ans[k]++;
		}
	}
}
bool flag1=true;
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		if(i>1&&a[i]<a[i-1])flag1=false;
	}
	if(flag1)solveA();
	else solveB();
	for(int i=1; i<=m; i++) {
		cout<<ans[i]<<" ";
	}
}
