#include<bits/stdc++.h>
typedef unsigned int uin;
using namespace std;
long long n,m,a[500005],d[500005];
map<long long,int> mp;
map<long long,uin> ans;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int at=1;
		for(int j=i;j<=n;j++){
			if(mp[a[j]]!=0){
				at=mp[a[j]];
			}
			d[at++]=a[j];
			mp[a[j]]=at-1;
		}
		for(int j=1;j<=m;j++){
			for(int k=1;k<at;k++){
				if(d[k]==j){
					ans[j]++;
					break;
				}
			}
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=n;j>=1;j--){
//			if(a[j]==i){
//				ans[i]=j;
//				break;
//			}
//		}
//	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}