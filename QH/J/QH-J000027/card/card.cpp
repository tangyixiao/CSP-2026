#include<bits/stdc++.h>
using namespace std;
int n,m,a[200050],g=INT_MIN,k;
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	k=a[1];
	for(int i=2;i<=m;i++){
		k=k&a[i];
	}
	printf("%d",k);
	return 0;
} 
