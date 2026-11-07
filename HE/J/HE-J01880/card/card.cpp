#include<bits/stdc++.h>
using namespace std;
bool A;
int a[500005],f[300005],vis[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[a[i]]=i;
		if(a[i]<a[i-1])A=1;
	}
	if(A==0){
		for(int i=1;i<=m;i++) cout<<f[i]<<" ";
	}
	else {
		for(int i=1;i<=n;i++){
			memset(f,0,sizeof(f));
			for(int j=i;j<=n;j++){
				f[a[j]++];
				for(int k=i;k<j;k++){
					if(a[k]==a[j]){
						for(int x=k;x<j;x++){
							f[a[x]]--;
						}
						break;
					}
				}
			}
		}
		for(int i=1;i<=m;i++){
			cout<<f[i]<<" ";
		}
	}
	return 0;
}
