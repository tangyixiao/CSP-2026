#include <bits/stdc++.h>
using namespace std;
int sum[300005];
bool s[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500005],k = 0;
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i ++)
		scanf("%d",&a[i]);
	for(int i = 1;i <= n;i ++){
		k = 0;
		memset(s,0,sizeof(s));
		for(int j = i - 1;j < n;j ++){
			k ++;
			if(s[a[j]]){
				int p = j - 1;
				do{
					s[a[p --]] = 0;
				}while(a[p] != a[j]);
			}
			s[a[j]] = 1;
		}
		for(int i = 1;i <= m;i ++)
			sum[i] += s[i];
	}
	for(int i = 1;i <= m;i ++)
		printf("%d ",sum[i]);
	
	return 0;
} 