#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[2*(int)1e5+10];
int b[200010];
int l;
int ans[200010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(a[i]!=a[i-1])b[a[i-1]]=i-1;
	}
	b[a[n]]=n;
	for(int i=1;i<=m;++i){
		cout<<b[i]<<' ';
	}
	return 0;
}
