#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,s;
int q[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int res=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>q[i];
			int l=q[i],r=q[i+1];
			s=(l<<i) & (r<<i);
			max(s,res);
			s=res;
		}
	}
	cout<<res;
	return 0;
}
