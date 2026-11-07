#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],x[500005],y[500005],z[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x[i]=a[i];
	}for(int u=0;u<=n;u++){
		for(int i=u;i<=n;i++){
			y[i-u+1]=x[i+1];
		}int d=0;
		for(int i=1;i<=n-u;i++){
			for(int j=1;j<=d;j++){
				if(z[j]==y[i]){
					 d=j-1;
				}
			}d++;
			z[d]=y[i];
		}for(int i=1;i<=d;i++)b[y[i]]++;
	}for(int i=1;i<=m;i++)cout<<b[i]<<' ';
	return 0;
}
