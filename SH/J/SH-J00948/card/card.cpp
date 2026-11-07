#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],cnt[100005],f[100005],w[100005],x=0,ans[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=m;i++){
			cnt[i]=0;
			f[i]=0;
		}
		for(int i=k;i<=n;i++){
			if(cnt[a[i]]!=0){
				for(int j=f[a[i]];j<=i;j++){
					cnt[a[j]]=0;
				}
			}
			cnt[a[i]]++;
			f[a[i]]=i;
		}
		for(int i=1;i<=m;i++){
			if(cnt[i]!=0){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
4 3
1 2 1 3
*/


