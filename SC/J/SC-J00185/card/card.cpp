#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int m,n,a[N],cnt[M],b[N],tong[M];
int main(){
	freopen(card.in,"r",stdin);
	freopen(card.out,"w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int t=1;
		memset(cnt,0,sizeof(cnt));
		for(int j=i;j<=n;j++){
			b[t]=a[j];
			if(cnt[a[j]]==0){
				cnt[a[j]]=t;
			}else{ 	
				for(int k=cnt[a[j]]+1;k<=t;k++){
					cnt[a[k]]=0;
				}
				t=cnt[a[j]]-1;
			}	
			t++;
		}
		for(int j=1;j<=t;j++){
			tong[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<tong[i]<<" ";
	}
	return 0;
}