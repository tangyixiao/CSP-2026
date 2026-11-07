#include <bits/stdc++.h>
using namespace std;
int n,m,v[510001],a[510001],x[510001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		int v[5101]={},l=0;
		for(int j=i;j<=n;j++){
			v[++l]=a[j];
			for(int k=l-1;k>=1;k--)
				if(v[k]==v[l]){l=k;break;}
		}
		for(int j=1;j<=l;j++)
			x[v[j]]++;
	}
	for(int i=1;i<=m;i++)
		cout <<x[i]<<' ';
	return 0;
}
