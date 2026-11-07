#include <bits/stdc++.h>
using namespace std;
bool f(char x,char y)
{
	if(x=='A'&&y=='B'||(x=='B'&&(y=='A'||y=='C'))||x=='C'&&y=='B'||x=='D'&&y=='F'||x=='F'&&y=='D')
	 return 1;
	return 0;
}
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int a,ax,b,bx;
	char ay,by;
	cin>>a>>ax>>ay>>b>>bx>>by;
	cout<<(a==b)<<((ax==bx)&&(a==b))<<((((ay=='A'||ay=='B'||ay=='C')&&(by=='A'||by=='B'||by=='C'))||((ay=='D'||ay=='F')&&(by=='d'||by=='F')))&&((ax==bx)&&(a==b)));
	cout<<(f(ay,by)&&((((ay=='A'||ay=='B'||ay=='C')&&(by=='A'||by=='B'||by=='C'))||((ay=='D'||ay=='F')&&(by=='d'||by=='F')))&&((ax==bx)&&(a==b))));
	return 0;
}
