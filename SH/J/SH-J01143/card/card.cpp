#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e6;
int n,m;
int a[N],b[N],c[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[j]=-1;
	}
		for(int j=i;j<=n;j++){
			b[j]=a[j];
			bool flag=0;
			for(int k=1;k<=j;k++){
				if(j==i){
					break;
				}
				if(flag){
					b[k]=-1;
				}
				if(b[k]==a[j]){
					flag=1;
					b[k]=-1;
				}
			}
	}
		for(int j=1;j<=n;j++){
			if(b[j]!=-1){
				c[b[j]]+=1;
			}
	}
	}
	for(int i=1;i<=m;i++){
		cin>>c[i];
	}
	return 0;
}
