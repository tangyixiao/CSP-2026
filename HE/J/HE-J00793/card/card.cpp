#include <bits/stdc++.h> 
using namespace std;
int n,m;
int a[1000000],c[1000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	for(int i=1;i<=n;i++){
		int b[500050]={};
		for(int j=i;j<=n;j++){
			b[a[j]]++;
			if (b[a[j]]==2){
				for(int x=j;x>=1;x--){
					if(a[x]==a[j] && x!=j)break;
					b[a[x]]=0;
				}
			}
			b[a[j]]=1;
		} 
		for(int x=1;x<=m;x++){
			c[x]+=b[x];
		}
	}
	for(int x=1;x<=m;x++){
		cout<<c[x]<<" ";
	}
	return 0;
}
