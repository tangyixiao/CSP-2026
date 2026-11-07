#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string s,t;
	cin>>a>>s>>b>>t;
	char ac=s[2];
	int at;
	if(ac=='A')at=1;
	if(ac=='B')at=2;
	if(ac=='C')at=3;
	if(ac=='D')at=4;
	if(ac=='E')at=5;
	int ax=(s[0]-'0')*10+(s[1]-'0');
	char bc=t[2];
	int bt;
	if(bc=='A')bt=1;
	if(bc=='B')bt=2;
	if(bc=='C')bt=3;
	if(bc=='D')bt=4;
	if(bc=='E')bt=5;
	int bx=(t[0]-'0')*10+(t[1]-'0');
	if(a==b)cout<<1;
	else cout<<0;
	if(a==b&&ax==bx)cout<<1;
	else cout<<0;
	if(a==b&&ax==bx&&((at<=3&&bt<=3)||(at>3&&bt>3)))cout<<1;
	else cout<<0;
	if(a==b&&ax==bx&&abs(at-bt)==1&&((at<=3&&bt<=3)||(at>3&&bt>3)))cout<<1;
	else cout<<0;
	return 0;
}
