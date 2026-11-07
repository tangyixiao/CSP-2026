#include<bits/stdc++.h>
using namespace std;
int a[300010],cnt[300010];int table[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(table,0,sizeof(table));
		for(int j=i;j<=n;j++){
			if(table[a[j]]){
				for(int k=table[a[j]];k<=j;k++)
					table[a[k]]=0;
			}
			table[a[j]]=i;
		}
		for(int j=1;j<=m;j++)
			if(table[j])cnt[j]++;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	return 0;
}
