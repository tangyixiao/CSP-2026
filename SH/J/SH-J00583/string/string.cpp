#include<bits/stdc++.h>
using namespace std;
int n,a[200010],b[200010],i,p,q,x,y;
char c[200010],d[200010];
long long m,k,ans,sx,sy,l;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		scanf("%d%s",&a[i],&c[i]);
		m+=a[i];
	}
	k=m,m/=2,i=1;
	while(m>=0){
		if(m-a[i]>=0){
			m-=a[i],i++; 
		}else{
			for(int j=1;j<=n-i;++j) b[j]=a[n+1-j],d[j]=c[n+1-j];
			if(m==0) b[n-i+1]=a[i],d[n-i+1]=c[i],p=i-1,q=n+1-i;
			else b[n-i+1]=a[i]-m,d[n-i+1]=c[i],a[i]=m,p=i,q=n+1-i;
			if(k%2){
				if(b[q]>1) b[q]--;
				if(b[q]==1) q--;
			}
			break;
		}
	}
	while(x<=p&&y<=q){
		if(sx<sy){
			l=sx,x++,sx+=1ll*a[x];
		}else if(sx>sy){
			l=sy,y++,sy+=1ll*b[y];
		}else if(sx==sy){
			l=sx,x++,sx+=1ll*a[x];y++,sy+=1ll*b[y];
		}
		if(c[x]!=d[y]) ans+=min(sx,sy)-l;
	} 
	printf("%lld",ans);
	return 0;
} 
