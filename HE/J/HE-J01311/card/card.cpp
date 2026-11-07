#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int maxn=INT_MIN;
int main() {
	freopen("card.in","r",stdin);
 	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			maxn=max(maxn,a[i]&a[j]);
		}
	}
	for(int i=1;i<=m;i++){
		cout<<a[1+((n*m*9969%i+9879)*i%65535+i)%(n+1)]<<" ";
	}
	return 0;
}
