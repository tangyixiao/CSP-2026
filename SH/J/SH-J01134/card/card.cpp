#include<bits/stdc++.h>
using namespace std;
int a[500009],b[500009],cnt[500009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int x=1;x<=n;x++){
		for(int i=x;i<=n;i++){
			int t=0;
			for(int j=1;j<=n;j++){
				if(b[j]==0){
					t=j;
					break;
				}
				if(a[i]==b[j]){
					for(int k=j;k<=n;k++){
						b[k]=0;
						cnt[b[k]]--;
					}
					t=j;
				}
			}
			b[t]=a[i];
			cnt[b[t]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
