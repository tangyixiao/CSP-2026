#include <bits/stdc++.h>
using namespace std;
const int MaxN = 5e5+100;
int n,m;
int a[MaxN];
int ans[MaxN];
int stk[MaxN];
bool del[MaxN];
void solve(int x){
//	printf("round=%d\n",x);
	int r = 0;
	for(int i = x; i <= n; i++){
		int j = 0;
		for(j=r; j >= 1; j--){
//			printf("a[i]=%d,stk[j]=%d\n",a[i],stk[j]);
			if(stk[j]==a[i])break;
		}
		if(j>0){
//			printf("j=%d,r=%d,a[%d]=%d\n",j,r,i,a[i]);
			r = j;continue;
		}
		r++;
		stk[r]=a[i];
//		printf("r=%d,a[%d]=%d\n",r,i,a[i]);
	}
	for(int i = 1; i <= r; i++){
		ans[stk[i]]++;
//		printf("stk[i]=%d\n",stk[i]);
	}
}


int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1; i <= n; i++)cin>>a[i];
	
	for(int i = 1; i <= n; i++)solve(i);
	for(int i = 1; i <= m; i++){
		cout<<ans[i]<< ' ';
	}
	fclose(stdout);
	fclose(stdin);
	return 0;
}
