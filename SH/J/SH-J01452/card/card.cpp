#include<bits/stdc++.h>
using namespace std;
const int N=500009;
int a[N],sum[N],t[N];
int n;
int check_same(int i){
	for(int j=1;j<i;j++){
		if(t[j]==t[i]) return j;
	}
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int k=1;k<=n;k++){
		for(int i=k;i<=n;i++){
			t[i]=a[i];
			int beg=check_same(i);
			if(beg){
				for(int j=beg;j<t[i];j++){
					t[j]=0;
				}
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(t[j]==i){
					sum[i]++;
					break;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",sum[i]);
	}
	return 0;
}
