#include<bits/stdc++.h>
using namespace std;
int n,m,x,s=0,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		x=a[1];
		for(int j=1;j<=m;++j){
			x=x and a[i];
		}
		s=max(s,x);
	}
	cout<<s;
	return 0;
}