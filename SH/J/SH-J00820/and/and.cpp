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
int n,m,tot;
int p[200005];
long long a[200005];
vector<int> g[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	read(n); read(m);
	for(int i=1;i<=n;++i){
		read(a[i]);
		for(int j=29;j>=0;--j){
			if((a[i]>>j)&0x01)
				g[j].push_back(i);
		}
	}
	for(int i=29;i>=0;--i){
		int cnt=0;
		for(int j=0;j<g[i].size();++j)
			cnt+=(p[g[i][j]]==tot);
		if(cnt<m)
			continue;
		for(int j=0;j<g[i].size();++j){
			if(p[g[i][j]]==tot)
				p[g[i][j]]++;
		}
		tot++;
	}
	long long ans=-1;
	for(int i=1;i<=n;++i)
	{
		if(p[i]==tot)
			ans=(ans==-1?a[i]:ans&a[i]);
	}
	printf("%lld\n",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;	
}
