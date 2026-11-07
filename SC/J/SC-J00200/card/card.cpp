#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010],b[500010],c[500010];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(c[a[j]]==0){
				c[a[j]]=j;
			}else{
				for(int k=1;k<=m;k++){
					if(c[k]>c[a[j]]){
						c[k]=0;
					}
				}
				c[a[j]]=j;
			}
		}
		for(int j=1;j<=m;j++){
			if(c[j]>0){
				b[j]++;
			}
			c[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}