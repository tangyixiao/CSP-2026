#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=5e5+3,M=3e5+3;
int n,m,a[N],lst[M],pre[N],cnt[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pre[i]=lst[a[i]];
		lst[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		cnt[i]=cnt[pre[i]]+1;
		if(i-1==lst[a[i-1]])	cnt[i]+=cnt[i-1];
	}
	for(int i=1;i<=m;i++)	cout<<cnt[lst[i]]<<' ';
	return 0;
}