#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;
int n,m;
int a[maxn];
int b[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i]; 
	}
	int cnt=n;
	int ans=0;
	for(int k=30;k>=0;k--){
		int l=0;
		for(int i=1;i<=cnt;i++){
			if((b[i]>>k)&1){
				l++;
			}
		}
		if(l>=m){
			ans|=(1<<k);
			int nc=0;
			for(int i=1;i<=cnt;i++){
				if((b[i]>>k)&1){
					b[++nc]=b[i];
				}
			}
			cnt=nc;
		}
	}
	printf("%d",ans);
	return 0;
}