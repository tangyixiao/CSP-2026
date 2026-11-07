#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;cin>>n>>m;
	int maxn=0;
	for(int i=1;i<=n;i++){
		int a;cin>>a;
		maxn=max(maxn,a);
	}
	cout<<maxn;
	return 0;
}
