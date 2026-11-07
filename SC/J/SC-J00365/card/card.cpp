#include<bits/stdc++.h>
using namespace std;
int a[500002],las[300002],ans[500002],cnt[300002],n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=n;i>=1;--i){
		if(!las[a[i]]) las[a[i]]=i;
	}
	for(int i=1;i<=n;++i){
		++ans[i];
		ans[las[a[i]]+1]+=ans[i],cnt[a[i]]+=ans[i];
		ans[i]=0;
	}
	for(int i=1;i<=m;++i){
		cout<<cnt[i]<<" ";
	}
	return 0;
}