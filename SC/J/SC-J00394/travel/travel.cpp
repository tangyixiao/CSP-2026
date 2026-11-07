#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
const int inf=0x3f3f3f3f;
const int N=2e6+9;
string c1,s1,c2,s2;
bool in_same_line(char a,char b){
	return ((a=='A'&&b=='B')||(a=='B'&&b=='C')||(a=='D'&&b=='F'));
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	string rp="";
	string xp="";
	char rw=s1[2];
	char xw=s2[2];
	rp=s1[0]+s1[1];
	xp=s2[0]+s2[1];
	if(c1==c2)cout<<1;
	else cout<<0;
	if(rp==xp&&c1==c2)cout<<1;
	else cout<<0;
	if(rp==xp&&c1==c2&&((rw>='A'&&rw<='C'&&xw>='A'&&xw<='C')||(rw>='D'&&rw<='F'&&xw>='D'&&xw<='F')))cout<<1;
	else cout<<0;
	if(rp==xp&&c1==c2&&((rw>='A'&&rw<='C'&&xw>='A'&&xw<='C')||(rw>='D'&&rw<='F'&&xw>='D'&&xw<='F'))&&(in_same_line(rw,xw)||in_same_line(xw,rw)))cout<<1;
	else cout<<0;
	return 0;
}