#include<bits/stdc++.h>
using namespace std;
int n,m,cnt=0;
int a[100010];
int ans[100010];
int zhan[100010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cnt=0;
		for(int j=i;j<=n;j++){
			zhan[++cnt]=a[j];
			for(int k=1;k<j;k++){
				if(zhan[k]==a[j]){
					cnt=k;
					continue;
				}
			}
		}
		for(int j=1;j<=cnt;j++){
			for(int k=1;k<=m;k++){
				cout<<ans[k]<<" "<<k<<"\n";
				if(zhan[j]==k)ans[k]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
