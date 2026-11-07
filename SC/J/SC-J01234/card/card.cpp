#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int getc(){
	static char buf[1<<14],*bg=buf,*ed=buf;
	if(bg==ed)
	{
		bg=buf;
		ed=buf+fread(buf,1,1<<14,stdin);
		if(bg==ed)	return EOF;
	}
	return *bg++;
}
int read(){
	int sgn=0,ret=0,ch=getc();
	while(ch!=EOF&&!isdigit(ch))	sgn|=ch=='-',ch=getc();
	while(isdigit(ch))	ret=ret*10+ch-'0',ch=getc();
	return sgn?-ret:ret;
}
int n,m;
int a[N],ans[M],d[M],cnt[M];
void clear(){
	for(int i=1;i<=n;++i)	d[i]=cnt[i]=0;
}
void modify(int x,int j){
	for(int i=x;i<=j;++i)
		if(cnt[a[i]])
			d[a[i]]=cnt[a[i]]=0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;++i)	a[i]=read();
	
	for(int i=1;i<=n;++i)
	{
		clear();
		for(int j=i;j<=n;++j)
		{
			if(d[a[j]])	modify(d[a[j]],j-1);
			d[a[j]]=j,cnt[a[j]]=1;
		}
		for(int k=1;k<=m;++k)
			if(cnt[k])
			{
				ans[k]++;
			}	
	}
	for(int i=1;i<=m;++i)	cout<<ans[i]<<" ";
	return 0;
}