#include<bits/stdc++.h>
using namespace std;
int c1,s1,c2,s2;
char p[3],s[3];
bool checkc(){
	if(c1==c2)return 1;
	else return 0;
}
bool checkline(){
	if(s1==s2&&checkc())return 1;
	else return 0;
}
bool check() {
	if (s[1]<='C'&&s[2]<='C'&&checkline())
		return 1;
	else if((s[1]<='F'&&s[1]>='D')&&(s[2]<='F'&&s[2]>='D')&&checkline())
		return 1;
	else
		return 0;
}

bool checkseat() {
	if(abs(s[1]-s[2])==1&&check())
		return 1;
	else
		return 0;
}

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=0;i<=1;i++) {
		cin>>p[i];
	}
	c1=p[0]-'0'*10+p[1]-'0';
	for (int i=0;i<=1;i++) {
		cin>>p[i];
		if (p[i]==' ')
			i--;
	}
	s1=p[0]-'0'*10+p[1]-'0';
	cin>>s[1];
	for(int i=0;i<=1;i++) {
		cin>>p[i];
		if (p[i]==' ')
			i--;
	}
	c2=p[0]-'0'*10+p[1]-'0';
	for(int i = 0; i <= 1; i++) {
		cin >> p[i];
		if (p[i] == ' ')
			i--;
	}
	s2=p[0]-'0'*10+p[1]-'0';
	cin>>s[2];
	if(checkc())cout<<1;
	else cout<<0;
	if(checkline())cout<<1;
	else cout<<0;
	if(check())cout<<1;
	else cout<<0;
	if(checkseat())cout<<1;
	else cout<<0;	
	return 0;
}
