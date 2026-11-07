#include <bits/stdc++.h>
using namespace std;

void OI(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
}
const int N=5e5+5;
int n,m,a[N];
int last[N];
int cnt[N];
void solve(){
	for(int i=1;i<=n;i++){
		int p=i;
		for(;p<=n;p++){
			p=last[a[p]];
			cnt[a[p]]++;
		}
	}
}
int main(){
	OI();
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=n;i>=1;i--)
		if(!last[a[i]])last[a[i]]=i;
	solve();
	for(int i=1;i<=m;i++){
		printf("%d ",cnt[i]);
	}
	return 0;
}
