#include<bits/stdc++.h>
using namespace std;
int n,m,a[500002],r[300002],cnt[500002];
int ans[300002];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		r[a[i]]=i; 
		cnt[i]=1;
	} 
	for(int i=1;i<=n;i++){
		if(i!=r[a[i]])cnt[r[a[i]]]+=cnt[i];
		else{
			ans[a[i]]=cnt[i];
			cnt[i+1]+=cnt[i];
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	cout<<'\n';
	return 0;
}
