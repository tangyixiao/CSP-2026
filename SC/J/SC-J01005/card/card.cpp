#include<bits/stdc++.h>
using namespace std; 
int n,m,a[500010], b[30010],c[300010],d[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[j]==0){ 
				b[a[j]]++;
				c[j]=a[j];
			}else {
				b[a[j]]++;
				c[j]=a[j];
				for(int k=j;k>=i;k--){
					b[c[k]]--;
					c[k]=0;
				}
			}
		}
	}
	b[a[1]]++;
	for(int i=1;i<=m;i++)
		cout<<b[i]<<' ';
	return 0;
}