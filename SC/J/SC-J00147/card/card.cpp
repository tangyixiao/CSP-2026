#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],flag[510],cnt[300010],fir[300010],ans[310],AAAA;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		if(a[i]<a[i-1]){
			AAAA=1;
		}
		if(!fir[a[i]]){
			fir[a[i]]=i;
		}
	}
	if(!AAAA){
		for(int i=1;i<=m;i++){
			cout<<cnt[i]/2+(cnt[i]%2?fir[i]:0)<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			flag[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(flag[a[j]]){
				for(int k=j-1;k>=i;k--){
					if(a[k]==a[j]){
						break;
					}
					flag[a[k]]=0;
				}
			}
			flag[a[j]]=1;
		}
		for(int j=1;j<=m;j++){
			ans[j]+=flag[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}