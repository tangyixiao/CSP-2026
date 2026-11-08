#include <bits/stdc++.h>
#define N 200005
using namespace std;
//µ÷ÊÔ£º1 2 3 4 5 ans ***%
//		T T T f F 3/5 050%
//			  t t	 10/20
//Can Try.
long long a[N];
long long maxx=0;
int n,m;
void dfs(int w,long long ans=0,int i=1) {
	if(i>=m) {
		maxx=max(maxx,ans);
		return;
	}
	for(int j=w+1;j<=n;j++) {
		dfs(j,ans&a[j],i+1);
	}
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	if(m==1) {
		for(int i=1;i<=n;i++) {
			maxx=max(maxx,a[i]);
		}
		cout<<maxx;
		return 0;
	}
	if(m==2) {
		for(int i=1;i<n;i++) {
			for(int j=i+1;j<=n;j++) {
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==n) {
		for(int i=1;i<n;i++) {
			maxx&=a[i];
		}
		cout<<maxx;
		return 0;
	}
	for(int i=1;i<=n;i++) {
		dfs(i,a[i]);
	}
	cout<<maxx;
	return 0;
}
//ans a b
//1   1 1
//0   1 0
//0   0 1
