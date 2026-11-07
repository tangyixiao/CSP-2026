#include<cstdio>
#include<cstdlib>
int n,m,a[200005],cnt,u,s=0X3FFFFFFF;
bool flag[200005];
bool digit(int a,int x){
	return (a>>x)&1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i)
		scanf("%d",&a[i]);
	u=n;
	for(int i=29;i>=0;--i){
		for(int j=0;j<n;++j)
			if(!flag[j]&&digit(a[j],i))
				++cnt;
		if(cnt>=m)
			for(int j=0;j<n;++j)
				if(!flag[j]&&!digit(a[j],i)){
					flag[j]=1;
					--u;
				}
		if(u==m){
			for(int j=0;j<n;++j)
				if(!flag[j])
					s=(s&a[j]);
			printf("%d",s);
			return 0;
		}
		cnt=0;
	}
	for(int j=0;j<n;++j)
		if(!flag[j])
			s=(s&a[j]);
	printf("%d",s);
	return 0;
} 
