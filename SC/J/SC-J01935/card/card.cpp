#include <bits/stdc++.h>
using namespace std;

int n,m,a[500001],b[500001],f[300001];
bool op[500001];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= n;i++){
		memset(op,true,sizeof(op));
		memset(b,0,sizeof(b));
		for(int j = i;j <= n;j++){
			b[a[j]]++;
		}
		for(int j = i;j <= n;j++){
			if(op[j] && b[a[j]] >= 2){
				int now = a[j];
				for(int k = n;k >= 1;k--){
					if(a[k] == now){
						for(int t = j;t < k;t++){
							op[t] = false;
						}
						j = k;
						break;
					}
				}
			}
		}
		for(int j = i;j <= n;j++){
			if(op[j]){
				f[a[j]]++;
			}
		}
	}
	for(int i = 1;i <= m;i++){
		printf("%d",f[i]);
		if(i != n){
			printf(" ");
		}
	}
	return 0;
}