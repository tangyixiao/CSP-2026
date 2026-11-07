#include<bits/stdc++.h>
using namespace std;
long long n,m,a[1000010],b[1000010]={0},c[1000010],size=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		size=1;
		memset(c,0,sizeof(c));
		for(int l=i;l<=n;l++){
			for(int j=1;j<size;j++){
				if(c[j]==a[l]){
					size=j;
				}
			}
			c[size]=a[l];
			size++;
		}
		for(int j=1;j<=size-1;j++){
			b[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}