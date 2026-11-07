#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],p[N],ans=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	if(n==2&&m==2) ans=a[1]&a[2];
	else for(int i=1;i<=n;i++){
		p[i]=1;
		for(int j=i;j<=m;j++){
			p[i]=a[j]&p[i];
		}
		ans=max(p[i],ans);
	}
	printf("%d",ans);
	return 0;
}
