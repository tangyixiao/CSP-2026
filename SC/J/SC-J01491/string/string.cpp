#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int m,n,c;
char a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&m);
	while(m--){
		int x;
		char y;
		scanf("%d%c",&x,&y);
		for(int i=n+1;i<=n+x;i++) a[i]=y;
		n+=x;
	}
	for(int i=1;i<=n/2;i++){
		if(a[i]!=a[n-i]) c++;
	}
	printf("%d",c);
	return 0;
}