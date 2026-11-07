#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
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
int n,m,mx,anss=0;
long long tol;
int a[N];
void dfs(int id,int cnt,int ans){
//id 当前位置 cnt 已选个数 ans 当前&值
	if(id>n&&cnt!=m) return ;
	if(cnt==m)
	{
		anss=max(ans,anss);
		return ;
	}
	dfs(id+1,cnt,ans);//不选a[id]
	dfs(id+1,cnt+1,ans&a[id]);//选	
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;++i)
	{
		a[i]=read();
		if(i==1)	mx=tol=a[i];
		else
		{
			mx=max(mx,a[i]);
			tol&=a[i];
		}
	}
	if(m==n)
	{
		cout<<tol;
		return 0; 
	}
	else if(m==1)
	{
		cout<<mx;
		return 0;
	}
	
	for(int i=1;i<=n-m+1;++i)	dfs(i+1,1,a[i]);
	cout<<anss;
	return 0;
}