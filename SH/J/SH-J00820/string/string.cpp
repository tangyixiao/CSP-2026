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
int n;
long long a[200006];
char sz[200006],ch[15];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	read(n);
	int len=0;
	for(int i=1;i<=n;++i){
		read(a[i]);
		scanf("%s",ch);
		if(ch[0]==sz[len])
			a[len]+=a[i];
		else
		{
			a[++len]=a[i];
			sz[len]=ch[0];
		}
	}
	long long ans=0;
	int x=len;
	for(int i=1;i<x;++i){
		while(x>i&&a[i]>0)
		{
			long long sub=min(a[i],a[x]);
			if(sz[x]!=sz[i])
				ans+=sub;
			a[x]-=sub;
			a[i]-=sub;
			if(a[x]<=0)
				x--;
		}
	}
	printf("%lld\n",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;	
}
