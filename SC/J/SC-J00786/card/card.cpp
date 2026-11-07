#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[300005],lst[300005];
int main(){
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],lst[a[i]]=i;
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)j=lst[a[j]],ans[a[j]]++;
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
