#include<bits/stdc++.h>
using namespace std;
int n,m,a[500003],a1[500003],cnt[500005],cnt1[500003];
int dfs(int g){
	for(int i=1;i<=n-g;i++){
		a1[i]=a[i+g];
	}
	int d=n-g;
	for(int i=1;i<=d;i++){
		for(int j=i;j>=0;j--){
			if(a[i]==a[j]){
				for(int z=j;z<=i;z++){
					cnt[z]=0;
				}
			}
			else{
				cnt[i]++;
			}
		} 
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		dfs(i);
		for(int j=1;j<=m;j++){
			if(cnt[j]>=1)cnt1[j]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt1[i]<<" ";
	}
	return 0; 
}