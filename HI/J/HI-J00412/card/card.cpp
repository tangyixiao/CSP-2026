#include <bits/stdc++.h>
using namespace std;
int n,m;
long long sum;
int a[500005],vis[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i] == a[i-1]) continue;
		vis[a[i]] = i;
		
	}
	sort(a+1,a+n+1);
	for(int i = 1;i<=n;i++){
		cout<<vis[a[i]]<<' ';
	}
}
