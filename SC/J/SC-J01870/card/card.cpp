#include<bits/stdc++.h>
using namespace std;
int n,m;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	if(m==1){
		cout<<n;
		return 0;
	}
	vector<int> a(n+1,0),nex(n+1,-1),last(m+1,0),ans(m+1,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(last[a[i]])
			nex[last[a[i]]]=i;
		last[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int l=i;l<=n;){
			while(nex[l]!=-1)
				l=nex[l];
			ans[a[l]]++,l++;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<' ';
	return 0;
}