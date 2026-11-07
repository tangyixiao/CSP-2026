#include<bits/stdc++.h>
using namespace std;
int getc(){
	static char buf[16384],*bg=buf,*ed=buf;
	if(bg==ed){
		bg=buf,ed=buf+fread(buf,1,16384,stdin);
		if(bg==ed)return EOF;}
	return *bg++;}
int read(){
	int sgn=0,ret=0,ch=getc();
	while(ch!=EOF&&!isdigit(ch))sgn|=ch=='-',ch=getc();
	while(isdigit(ch))ret=ret*10+ch-'0',ch=getc();
	return sgn?-ret:ret;}
string readstr(){
	string s;char ch=getc();
	while(ch!=EOF&&isspace(ch))ch=getc();
	while(ch!=EOF&&!isspace(ch))s.push_back(ch),ch=getc();
	return s;}
struct fw{
	char buf[1<<20],*p=buf;
	~fw(){flush();}
	void flush(){fwrite(buf,1,p-buf,stdout);p=buf;}
	void put(char c){if(p==buf+(1<<20))flush();*p++=c;}
	void wrt(string&s){for(char c:s)put(c);}
	void wrt(int x){
		if(x<0)put('-'),x=-x;
		int tmp[20],*t=tmp;
		do *t++=x%10+'0';while(x/=10);
		while(t!=tmp)put(*--t);}
	fw&operator<<(char c){put(c);return*this;}
	fw&operator<<(string&s){wrt(s);return*this;}
	fw&operator<<(int x){wrt(x);return*this;}}out;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1=readstr(),s1=readstr(),c2=readstr(),s2=readstr();
	string s112=s1.substr(0,2),s212=s2.substr(0,2);
	char id1=s1[2],id2=s2[2];
	bool op=(c1==c2);
	out<<op;
	op&=(s112==s212);
	out<<op;
	if(op==0){out<<0<<0;return 0;}
	if(id1=='A')out<<(id2=='B'||id2=='C')<<(id2=='B');
	else if(id1=='B')out<<(id2=='A'||id2=='C')<<(id2=='A'||id2=='C');
	else if(id1=='C')out<<(id2=='A'||id2=='B')<<(id2=='B');
	else if(id1=='D')out<<(id2=='F')<<(id2=='F');
	else if(id1=='F')out<<(id2=='D')<<(id2=='D');
	return 0;}