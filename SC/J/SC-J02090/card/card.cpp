#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int q[300005],f[300005];
int main(){
	freopen("card.in",r,stdin);
	freopen("card.out",w,stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			q[i]=0;
		}
		for(int j=i;j<=n;j++){
			q[a[j]]++;
			if(q[a[j]]>1){
				int bj=0;
				for(int k=j-1;k>=0;k--){
					if(q[k]==q[a[j]])bj=1;
					if(bj==1)q[k]=0;
				}
			}
		}
		for(int j=1;j<=n;j++){
			if(q[j]==1)f[j]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<f[i]<<" ";
	}
	return 0;
}