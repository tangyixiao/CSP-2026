#include<bits/stdc++.h>
using namespace std;
int a[500005],f[500005],c[500005]={0},c1[500005]={0},p[500005];
int main(){
	freopen("crad.in","r",stdin);
	freopen("crad.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(f,0,sizeof(f));
		for(int j=i;j<=n;j++){
			if(f[a[j]]!=1){
				f[a[j]]=1;
				c1[a[j]]=1;
				p[a[j]]=j;
			}
			else{
				for(int k=p[a[j]];k<j;k++){
					c1[a[k]]=0;
					f[a[j]]=0;
				}
			}
		}
		if(c1[a[i]]==1){
			c[a[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[a[i]]<<" ";
	}
	return 0;
}
