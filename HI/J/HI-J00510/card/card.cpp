#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[50005],b[10],c[50005],d=0;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		for(int o=0;o<=n;o++){
			c[o]=0;
		}
		for(int x=i;x<=n;x++){
		    c[x]=a[x];
			if(i!=x&&a[i]==a[x]){
				d=i;
				for(int y=d;y<x;y++){
			   	c[y]=0;
			   }
		}
		}
		for(int q=1;q<=9;q++){
		for(int l=i;l<=n;l++){
			if(c[l]==q){
				b[q]++;
			}
		}
	}
	}
	for(int i=1;i<=9;i++){
		if(b[i]==0)continue;
		cout << b[i] << " ";
	}
	return 0;
}
