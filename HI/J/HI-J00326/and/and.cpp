#include<bits/stdc++.h>
using namespace std;
int n,m,ans,ns[20];
int a[200005];
inline int read(){
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read();
	m=read();
	if(m==1){
		ans=-1;
		for(int i=1;i<=n;i++){
			a[i]=read();
			ans=max(ans,a[i]);
		}
		printf("%d",ans);
		return 0;
	}
	if(m==n){
		a[1]=read();
		ans=a[1];
		for(int i=2;i<=n;i++){
			a[i]=read();
			ans&=a[i];
		}
		printf("%d",ans);
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			a[i]=read();
		}
		ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		printf("%d",ans);
		return 0;
	}
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	sort(a+1,a+1+n);
	ans=a[m];
	for(int i=m;i<=n;i++){
		ans&=a[i];
	}
	printf("%d",ans);
	return 0;
}
