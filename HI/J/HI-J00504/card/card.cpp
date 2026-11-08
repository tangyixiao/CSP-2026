#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[50005], b[101][101], c[50005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d", &n, &m);
	for(int i = 1;i <= n;i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			b[j]=0;
		}
		for(int j = n;j >= i;j--){
			++b[a[j]];
			if(b[a[j]]>1) break;
			++c[a[j]];
		}
	}
	for(int i = 1;i <= m;i++){
		if(c[a[i]>0]) printf("%d ",c[a[i]]);
	}
	return 0;
}
