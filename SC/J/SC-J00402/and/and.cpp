#include<bits/stdc++.h>
const int N=2e5+10;
int a[N],b[N];
int main(){
	std::freopen("and.in","r",stdin);
	std::freopen("and.out","w",stdout);
	int n,m;scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	int ans=0;
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++)
			if(a[j]&(1<<i)) cnt++;
		if(cnt>=m){
			ans+=(1<<i);int len=0;
			for(int j=1;j<=n;j++)
				if(a[j]&(1<<i)) b[++len]=a[j];
			for(int j=1;j<=len;j++) a[j]=b[j];
			n=len;
		}
	}
	printf("%d",ans);
	return 0;
}