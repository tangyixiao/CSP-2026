#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,a[200005],m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	int ans;
	if(m==n){
		ans=a[1];
		for(int i=1;i<=n;i++) ans&=a[i];
	}
	else if(m==1){
		ans=a[1];
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
	}
	else if(m==2){
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++){
				ans=max(a[i]&a[j],ans);
			}
	}
	printf("%d",ans);
	return 0;
}
