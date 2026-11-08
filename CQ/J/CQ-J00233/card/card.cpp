#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],tong[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	if(m==1) {
		cout<<n;return 0;
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		tong[a[i]]++;tong[a[n]]++;
	}
	for(int i=1;i<=m;i++) printf("%d ",tong[i]);
	return 0;
} 
