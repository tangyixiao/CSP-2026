#include<bits/stdc++.h>
using namespace std;
int read(){
	int x=0,ch=getchar();
	while(!isdigit(ch)) ch=getchar();
	while(isdigit(ch)) x=x*10+ch-'0',ch=getchar();
	return x;
}
int a,b;
string s,t;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s>>b>>t;
	if(a!=b) puts("0000");
	else{
		putchar('1');
		if(s[0]!=t[0]||s[1]!=t[1]) puts("000");
		else{
			putchar('1');
			char x=s[2],y=t[2];
			if(x>y) swap(x,y);
			if(x=='D'&&y=='E') puts("11");
			else if(x<='C'&&y<='C'){
				if(y==x+1) puts("11");
				else puts("10");
			}else puts("00");
		}
	}
	return 0;
}
