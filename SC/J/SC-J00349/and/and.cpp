#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
long long cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n/2+1;i++){
		long long c1=a[i];
		for(int j=i;j<=n/2+1;j++){
			long long c=a[j];
			for(int q=1;q<=m-1;q++){
				c=max(c,c&a[j+q]);
			}
			c1=max(cnt,c);
		}
		cnt=max(cnt,c1);
	}
	printf("%d",cnt);
	return 0;
}