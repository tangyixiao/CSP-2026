#include<bits/stdc++.h>
using namespace std;

int n,m,a[500009],v[300009],ans[300009];

void solve1() {
	for(int i=1; i<=n; i++) {
		memset(v,0,sizeof(v));
		for(int j=i; j<=n; j++) {
			if(v[a[j]]) {
				for(int k=1; k<=m; k++) {
					if(k==a[j]) {
						continue;
					}
					if(v[k]>v[a[j]]) {
						v[k]=0;
					}
				}
			}
			v[a[j]]=j;
		}
		for(int j=1; j<=m; j++) {
			if(v[j]) {
				ans[j]++;
			}
		}
	}
	for(int i=1; i<=m; i++) {
		cout<<ans[i]<<" ";
	}
	return;
}

void solve2(){
	for(int i=1;i<=n;i++){
		ans[a[i]]=i;
	}
	for(int i=1; i<=m; i++) {
		cout<<ans[i]<<" ";
	}
	return;
}

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	if(n<=500&&m<=200){
		solve1();
	}else{
		solve2();
	}
	return 0;
}

