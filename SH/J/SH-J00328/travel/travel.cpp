#include <bits/stdc++.h>
using namespace std;
string cr,sr,cx,sx;
struct node{
	int c,p;// 1~18
	char l; // ABCDF
	bool LR=false; // false=L
}r,x;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	r.c=(cr[0]-'0')*10+(cr[1]-'0');
	x.c=(cx[0]-'0')*10+(cx[1]-'0');
	r.p=(sr[0]-'0')*10+(sr[1]-'0');
	x.p=(sx[0]-'0')*10+(sx[1]-'0');
	r.l=(sr[2]); if(r.l=='D'||r.l=='F'){ r.LR=true; }
	x.l=(sx[2]); if(x.l=='D'||x.l=='F'){ x.LR=true; }
//	cout<<r.c<<" "<<r.p<<" "<<r.l<<"/\n";
//	cout<<x.c<<" "<<x.p<<" "<<x.l<<"/\n";
	if(r.c!=x.c)  { cout<<"0000"; return 0; }
	if(r.p!=x.p)  { cout<<"1000"; return 0; }	
	if(r.LR!=x.LR){ cout<<"1100"; return 0; }
	if(r.l=='A'&&x.l=='B'){ cout<<"1111"; return 0; }
	if(r.l=='B'&&x.l=='A'){ cout<<"1111"; return 0; }
	if(r.l=='C'&&x.l=='B'){ cout<<"1111"; return 0; }
	if(r.l=='B'&&x.l=='C'){ cout<<"1111"; return 0; }
	if(r.l=='A'&&x.l=='B'){ cout<<"1111"; return 0; }
	if(r.l=='D'&&x.l=='F'){ cout<<"1111"; return 0; }
	if(r.l=='F'&&x.l=='D'){ cout<<"1111"; return 0; }
	cout<<"1110";
	return 0;
}
// xie dai ma tu zhong an dao F12 jian,
// dao zhi wo di yi ci bian yi CE le
