#include<bits/stdc++.h>
using namespace std;
int a[200005],b[200005],k[200005]={1},cnt[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
		k[a[i]]=i;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			for(int f=j;f<=n;){
				if(b[a[f]]>1&&k[a[f]]>f){
					f=k[a[f]];
					continue;
				}
				if(a[f]==i){
					cnt[i]++;
				}
				f++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
} 