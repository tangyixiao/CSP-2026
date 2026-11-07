#include<bits/stdc++.h>
using namespace std;
int n,m,b[100010],cnt[1000010],a[100010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int p=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=p;j++){
			if(b[j]==a[i]){
				for(int k=j;k<=p;k++)b[k]=0;
				p=j;
			}
		}
		b[++p]=a[i];
		for(int j=1;j<=p;j++){
			cnt[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}