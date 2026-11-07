#include<bits/stdc++.h>
using namespace std;
int n,m;
int flag[500010],sum[500010];
int a[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i = 1;i<=n;i++){
		scanf("%d",&a[i]);
		flag[a[i]] = i;
	}
	for(int i = 1;i<=n;i++){
		int ans = i;
		while(ans<=n){
			ans = flag[a[ans]];
			sum[a[ans]]++;
			ans++;
		}
	}
	for(int i = 1;i<=m;i++){
		printf("%d ",sum[i]);
	}
	return 0;
}
