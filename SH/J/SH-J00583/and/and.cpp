#include<bits/stdc++.h>
using namespace std;
int n,m,x,l[200010],mx,li[200010],c,ans,p[35]={1};
bool a[200010][32];
int t22(int xx,int nu){
	int le=0;
	while(xx) a[nu][le]=xx%2,xx/=2,le++;
	return le;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&x);
		l[i]=t22(x,i),mx=max(mx,l[i]);
	}
	for(int i=1;i<31;++i) p[i]=2*p[i-1];
	for(int i=0;i<n;++i) li[c++]=i+1; 
	for(int i=mx-1;i>=0;--i){
		int s=0,tc=0;
		for(int j=0;j<c;++j) s+=a[li[j]][i];
		if(s>=m){
			for(int j=0;j<c;++j)
				if(a[li[j]][i]==1)
					l[tc++]=li[j];
			c=tc,ans+=p[i];
			for(int i=0;i<c;++i) li[i]=l[i];
		}
	}
	printf("%d",ans);
	return 0;
} 
