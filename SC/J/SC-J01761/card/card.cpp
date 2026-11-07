#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],c[500005],f;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])f=1;
	}
	if(f){
		for(int i=1;i<=n;i++){
			int cnt=0;
			for(int j=i;j<=n;j++){
				for(int k=1;k<=cnt;k++)if(a[j]==c[k])cnt=k-1;
				c[++cnt]=a[j];
			}
			for(int j=1;j<=cnt;j++)b[c[j]]++;
		}
		for(int i=1;i<=m;i++)if(b[i])cout<<b[i]<<" ";
	}else{
		int cnt=0,sum=0;
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i-1])c[++cnt]++;
			else c[cnt]++;
		}
		for(int i=1;i<=cnt;i++){
			sum+=c[i];
			cout<<sum<<" ";
		}
	}
	return 0;
}