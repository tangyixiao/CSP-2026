#include<bits/stdc++.h>
using namespace std;
int n,m,ma,cnt;
int a[1000010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1)for(int i=1;i<=n;i++)ma=max(a[i],ma);
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ma=max(a[i]&a[j],ma);
			}
		}
	}else if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)ma=max(a[i]&a[j]&a[k],ma);
			}
		}
	}else if(m==4){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)for(int l=l+1;l<=n;l++)ma=max(a[i]&a[j]&a[k]&a[l],ma);
			}
		}
	}else{
		for(int i=1;i<=n;i++)for(int j=i+1;j<=n;j++)for(int k=j+1;k<=n;k++)for(int l=k+1;l<=n;l++)for(int x=l+1;x<=n;x++)ma=max(a[i]&a[j]&a[k]&a[l]&a[x],ma);
	}
	cout<<ma;
	return 0;
}
