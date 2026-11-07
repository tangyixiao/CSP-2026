#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],maxn,minn=1e9;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
		minn=min(minn,a[i]);
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	sort(a+1,a+1+n,greater<int>());
	cout<<a[m];
	return 0;
}
