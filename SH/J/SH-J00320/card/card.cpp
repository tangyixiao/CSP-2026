#include<bits/stdc++.h>
#define N 500003
#define M 300003
using namespace std;
typedef long long ll;
int n,m,a[N],ans[M]; 
int cards[N],k=0;
bool ext[M];
void input(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
}
void solvebf(){
	for(int T=1;T<=n;T++){
//		printf("\nGame %d:\n",T);
		for(int i=1;i<=m;i++)
			ext[i]=0;
		for(int i=0;i<=k;i++)
			cards[i]=0;
		k=0;
		for(int i=T;i<=n;i++)
			if(ext[a[i]]){
				int j=0;
				while(1){
					if(cards[j]==a[i])break;
					if(j>=k)break;
					//printf("a[%d]=%d is not %d (%d)\n",i,a[i],j,cards[j]);
					j++;
				}
				for(int t=1;t<=m;t++)
					ext[t]=0;
				for(int t=0;t<=j;t++)
					ext[cards[t]]=1;
				for(int t=j+1;t<=k;t++)
					cards[t]=0;
//				printf("Found a[%d]=%d at %d (%d)\n",i,a[i],j,cards[j]);
				k=j+1;
//				for(int t=0;t<=k-1;t++)
//					printf("%d ",cards[t]);
//				printf("\n");
			}
			else{
				cards[k]=a[i];k++;
				ext[a[i]]=1;
//				printf("Put a[%d]=%d at %d (%d)\n",i,a[i],k-1,cards[k-1]);
//				for(int t=0;t<=k-1;t++)
//					printf("%d ",cards[t]);
//				printf("\n");
			}
//		for(int t=1;t<=k;t++)
//			printf("%d ",cards[t]);
//		printf("\n");
		for(int i=0;i<=k-1;i++)
			ans[cards[i]]++;
//		printf("Answers now:");
//		for(int i=1;i<=m;i++)
//			printf("%d ",ans[i]);
//		printf("\n");
	}
}
bool okA(){
	for(int i=1;i<=n-1;i++)
		if(a[i]>a[i+1])return 0;
	return 1;
}
int cnt[M];
void solveA(){
	for(int i=1;i<=n;i++)
		cnt[a[i]]++;
	for(int i=1;i<=m;i++)
		ans[i]=ans[i-1]+cnt[i];
}
bool okB(){
	int ret=0;
	for(int i=1;i<=n-1;i++)
		if(a[i]!=a[i+1])ret++;
	return (ret<=4999);
}
void solveB(){
	solvebf();
}
void solve(){
	solvebf();
}
//void tst(){
//	for(int i=1;i<=n;i++)
//		cnt[a[i]]++;
////	for(int i=1;i<=m;i++)
////		printf("%d ",cnt[i]);
////	printf("\n");
//}
void print(){
	for(int i=1;i<=m;i++)
		printf("%d ",ans[i]);
}
int main(){// Trick or Treat!
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	input();
//	solve();
	if(okA())solveA();
	else solvebf();
	print();
	return 0;
}
