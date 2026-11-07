#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	int mx=0;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
	}
	cout<<min(a[n-2],mx);
	return 0;
}
