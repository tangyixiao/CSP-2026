#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],b[N],c[M],ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=c[a[i]];
		c[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		int K[M];
		memset(K,0,sizeof(K));
		for(int j=n-i+1;j<=n;j++){
			if(b[j]>=n-i+1){
				for(int k=b[j];k<j;k++){
					if(K[a[k]]) K[a[k]]--;
				}
			}
			K[a[j]]++;
		}
		for(int j=1;j<=m;j++){
		    if(K[j]) ans[j]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}