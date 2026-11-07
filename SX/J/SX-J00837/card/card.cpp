#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[300005],c[500005],cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			b[j]=a[j];
			c[b[j]]=j;
			if(b[j]==c[j]){
				for(int k=c[j];k<=j;k++){
					b[k]=-1;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(b[j]!=-1){
				cnt[b[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}