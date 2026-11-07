#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[510000];
int st[510000];
int tp;
int lm[310000];
int ans[310000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			lm[j] = 0;
		}
		tp = 0;
		for(int j = i;j <= n;j++){
			if(lm[a[j]] != 0){
				tp = lm[a[j]] - 1;
			}
			st[++tp] = a[j];
			lm[a[j]] = tp;
		}
		for(int j = 1;j <= tp;j++){
			ans[a[j]]++;
		}
	}
	for(int i = 1;i <= m;i++){
		printf("%d ",ans[i]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

