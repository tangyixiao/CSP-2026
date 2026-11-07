#include<bits/stdc++.h>
using namespace std;
int n,tot,ans;
char a[100000001];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char c;
		cin>>x>>c;
		for(int j=1;j<=x;j++){
			a[++tot]=c;
		}
	}
	for(int i=1;i<=tot/2;i++){
		if(a[i]!=a[tot-i+1])ans++;
	}
	cout<<ans;
	return 0;
}