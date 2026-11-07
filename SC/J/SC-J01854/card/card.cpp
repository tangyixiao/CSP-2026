#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],c[300001],b[300001],x,d[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= n;i++){
		x = 0;
		for(int j = i;j <= n;j++){
			if(d[a[j]] == 0){
				x++;
				c[x] = a[j];
				d[c[x]] = 1;
			}else{
				while(c[x] != a[j]){
					d[c[x]] = 0;
					x--;
				}
			}		
		}
		for(int j = 1;j <= x;j++){
			b[c[j]]++;
			d[c[j]] = 0;
		}
	}
	for(int i = 1;i <= m;i++)
		printf("%d ",b[i]);
	printf("\n");
	return 0;
} 