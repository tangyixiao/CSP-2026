#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ticket{
	string c,s;
};
bool check1(ticket a,ticket b){
	if((a.s[2]=='A'&&b.s[2]=='B')||(a.s[2]=='A'&&b.s[2]=='C')||(a.s[2]=='B'&&b.s[2]=='C')) return 1;
	else if((b.s[2]=='A'&&a.s[2]=='B')||(b.s[2]=='A'&&a.s[2]=='C')||(b.s[2]=='B'&&a.s[2]=='C')) return 1;
	else if((a.s[2]=='D'&&b.s[2]=='F')||(a.s[2]=='F'&&b.s[2]=='D')) return 1;
	else return 0;
}
bool check2(ticket a,ticket b){
	if((a.s[2]=='A'&&b.s[2]=='B')||(a.s[2]=='B'&&b.s[2]=='C')) return 1;
	else if((b.s[2]=='A'&&a.s[2]=='B')||(b.s[2]=='B'&&a.s[2]=='C')) return 1;
	else if((a.s[2]=='D'&&b.s[2]=='F')||(a.s[2]=='F'&&b.s[2]=='D')) return 1;
	else return 0;
}
ticket r,x;
string ans="0000";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r.c>>r.s>>x.c>>x.s;
	if(r.c==x.c) ans[0]='1';
	else ans[0]='0';
	if(ans[0]=='1'&&r.s[0]==x.s[0]&&r.s[1]==x.s[1]) ans[1]='1';
	else ans[1]='0';
	if(ans[1]=='1'&&check1(r,x)) ans[2]='1';
	else ans[2]='0';
	if(ans[2]=='1'&&check2(r,x)) ans[3]='1';
	else ans[3]='0';
	cout<<ans;
	return 0;
}