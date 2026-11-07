#include <bits/stdc++.h>
using namespace std;
int a[100005],n,m,ans,cnt,t;

bool cmp(int x,int y) {
	return a[x]>a[y];
}

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1; i<=n; i++) {
		if(a[i]==a[i-1]) {
			cout<<a[i];
			return 0;
		}
	}
	return 0;
}