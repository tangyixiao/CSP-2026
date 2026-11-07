#include <bits/stdc++.h>
using namespace std;
int vis[300010],a[500010],k[500010];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int C=0;C<n;C++){
		int weizhi=0;
		int p=0;
		bool flag=true;
		for(int i=C;i<n;i++){
			for(int j=0;k[j]!=0;j++){
				if(a[p]==k[j]){
					for(int h=j;h<n;h++){
						k[h]=0;
					}
					weizhi=j;
					flag=false;
				}
			}
			if(flag)weizhi++;
			k[weizhi]=a[p];
			p++;
		}
		for(int i=0;k[i]!=0;i++){
			vis[k[i]]++;
		}
		memset(k,0,sizeof(k)); 
	}
	for(int i=1;i<=m;i++){
		cout<<vis[i]<<' ';
	}
	return 0;
}