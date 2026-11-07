#include<bits/stdc++.h>
using namespace std;
int n,m,a[300005],b,cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b;
		for(int j=i,k=0;j>=1;j--,k++){
			if(a[j]==0) continue;
			if(a[j]==b){
				int l=k;
				while(l){
					a[j+l]=0;
					l--;
				}
			}
			a[i]=b;
		}
		for(int j=1;j<=n;j++){
			if(a[j]==0) continue;
			cnt[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
