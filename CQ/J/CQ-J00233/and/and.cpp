#include<bits/stdc++.h>
using namespace std;
const int MAXN=(int)2e5+5;
int n,m,ji,ou,cntji,cntou;
long long a[MAXN],ji1[MAXN],ou1[MAXN],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		if(a[i]%2!=0) ji1[++cntji]=a[i];
		else ou1[++cntou]=a[i];
	}
	if(n==m){
		ans=a[1];
		for(int i=2;i<=n;i++) ans=ans&a[i];
		printf("%lld",ans);
		return 0;
	}
	if(cntji<m && cntou<m){
		printf("0");return 0;
	}
	sort(ji1+1,ji1+1+cntji);
	sort(ou1+1,ou1+1+cntou);
	int final_ji=cntji-m+1,final_ou=cntou-m+1;
	for(int i=cntji;i>cntji-m+1;i--){
		if(ji1[i]==ji1[i-1]) final_ji--;
	}
	for(int i=cntou;i>cntou-m+1;i--){
		if(ou1[i]==ou1[i-1]) final_ou--;
	}
	ans=max(ji1[cntji-m+1],ou1[cntou-m+1]);
	printf("%lld",ans);
	return 0;
}

