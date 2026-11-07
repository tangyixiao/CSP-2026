#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,m,maxn;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}		
	}
	else{
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				int t=1;
				for(int k=1;k<=m;k++){
					t=t&(a[j]&a[j+k]);
				}
				maxn=max(maxn,a[i]&t);
			}
		}
	}

	printf("%d",maxn);
	return 0;
}