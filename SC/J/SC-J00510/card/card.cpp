#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],sc[300005],l[10005][10005],p[10005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],p[a[i]]++,l[a[i]][p[a[i]]]=i;
	for(int i=1;i<=n;i++){
		sc[a[i]]++;
		for(int j=l[a[i]][p[a[i]]]+1;j<=n;j=l[a[j]][p[a[j]]]+1) sc[a[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<sc[i]<<" ";
	return 0;
}