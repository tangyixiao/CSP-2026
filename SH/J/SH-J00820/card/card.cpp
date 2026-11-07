#include<bits/stdc++.h>
using namespace std;
template<typename T>
inline void read(T &s){
	int f=1;
	char ch=getchar();
	s=0;
	while(!isdigit(ch)){
		if(ch=='-')
			f=-1;
		ch=getchar(); 
	}
	while(isdigit(ch)){
		s=s*10+ch-'0';
		ch=getchar();
	}
	s*=f;
}
int n,m;
int a[500005],inst[300005],st[500005],st_top,rk[500005],cntnum[300005],ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	read(n); read(m);
	for(int i=1;i<=n;++i){
		read(a[i]);
		rk[i]=++cntnum[a[i]];
	}
	for(int i=n;i>=1;--i){
		if(rk[i]==cntnum[a[i]])
		{
			st_top=0;
			memset(inst,0,sizeof(inst));
			for(int j=i;j<=n;++j)
			{
				if(inst[a[j]])
				{
					while(st_top>0&&st[st_top]!=a[j])
						st_top--;
				}
				else{
					st[++st_top]=a[j];
					inst[a[j]]=1;
				}
			}
			for(int j=1;j<=st_top;++j)
				ans[st[j]]+=rk[i];
		}
	}
	for(int i=1;i<=m;++i)
		printf("%d ",ans[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;	
}
