#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
ll a[200005];
int mi(int x){
	return 1<<x;
}
int maxv=0;
int voi(int x){
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			a[x]&=voi(x);
		}
	}
	
}
int ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
	}
	if(m==1){
		sort(a+1,a+n+1);
		ans=a[n];
		printf("%d\n",ans);
		return 0;
	}
	for(int i=1;i<=n;++i){
		int v=voi(i);
		maxv=max(maxv,v);
	}
	printf("%d\n",maxv);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
