#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll getc(){
	static char buf[16384],*bg=buf,*ed=buf;
	if(bg==ed){
		bg=buf,ed=buf+fread(buf,1,16384,stdin);
		if(bg==ed)return EOF;}
	return *bg++;}
ll read(){
	ll sgn=0,ret=0,ch=getc();
	if(ch==EOF)return EOF;
	while(ch!=EOF&&!isdigit(ch))sgn|=ch=='-',ch=getc();
	while(isdigit(ch))ret=ret*10+ch-'0',ch=getc();
	return sgn?-ret:ret;}
char readc(){
	char ch=getc();
	while(ch!=EOF&&isspace(ch))ch=getc();
	return ch;}
struct fw{
	char buf[1<<20],*p=buf;
	~fw(){flush();}
	void flush(){fwrite(buf,1,p-buf,stdout);p=buf;}
	void put(char c){if(p==buf+(1<<20))flush();*p++=c;}
	void wrt(string&s){for(char c:s)put(c);}
	void wrt(ll x){
		if(x<0)put('-'),x=-x;
		int tmp[20],*t=tmp;
		do *t++=x%10+'0';while(x/=10);
		while(t!=tmp)put(*--t);}
	fw&operator<<(char c){put(c);return*this;}
	fw&operator<<(string&s){wrt(s);return*this;}
	fw&operator<<(ll x){wrt(x);return*this;}
	fw&operator<<(int x){wrt(x);return*this;}}out;
vector<char>c;
ll ans;//记得开long long 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n=read();
	c.push_back(' ');
	ll tmp;
	for(int i=1;i<=n;++i){
		int a=read();char ch=readc();
		for(int j=1;j<=a;++j)c.push_back(ch);}//99963 25073187
	int sz=c.size();
	for(int i=1;i<=sz/2;++i)ans+=(c[i]!=c[sz-i]);
	out<<ans;


//	while(1){
//		int i=read(),j=read();
//		ll ans=read();
//		if(i==EOF||j==EOF||ans==EOF)break;
//		string ac="Accept";
//		if(pre[min(i,j)]!=ans)out<<i<<' '<<j<<' '<<pre[min(i,j)]<<'\n';
//		else out<<ac<<'\n';}
	return 0;}