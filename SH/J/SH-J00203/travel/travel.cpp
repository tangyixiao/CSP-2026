#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b;
	string s1, s2;
	cin>>a>>s1>>b>>s2;
	int c = (s1[0]-'0')*10+s1[1]-'0', d = (s2[0]-'0')*10+s2[1]-'0';
	char e = s1[2], f = s2[2];
	if(e>f)swap(e, f);
	if(a!=b)printf("0000");
	else if(c!=d)printf("1000");
	else if(e<'D'&&f>'C')printf("1100");
	else if(e=='D'&&f=='F'||e=='A'&&f=='B'||e=='B'&&f=='C')printf("1111");
	else printf("1110");
	return 0;
}
