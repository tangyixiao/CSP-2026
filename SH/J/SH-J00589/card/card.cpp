#include<bits/stdc++.h>
using namespace std;
int n,m,a[300010],c[300010],d[300010];
bool b[300010];
int main(){
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]==d[j]){
					for(int x=j;x<i;x++) d[x]=0;
				}
			}
			d[i]=a[i];
		}
		for(int i=k;i<n;i++) c[d[i]]++;
	}
	for(int i=1;i<=m;i++) cout<<c[i]<<' ';
	return 0;
}
