#include <bits/stdc++.h>
using namespace std;
int n, m, a, f[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a;
		f[a]++;
	}
	for (int i=1;i<=m;i++){
		f[i]+=f[i-1];
		cout<<f[i]<<" ";
	}
	return 0;
}
