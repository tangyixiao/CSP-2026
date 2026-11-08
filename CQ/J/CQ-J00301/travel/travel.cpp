#include<bits/stdc++.h>
#define stop return 0
using namespace std;
int c1,c2,sr,sx;
char pr,px,t;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin),freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){cout<<"0000";stop;}
	cout<<1,sr=s1[0]*10+s1[1],sx=s2[0]*10+s2[1];
	if(sr!=sx){cout<<"000";stop;}
	cout<<1,pr=s1[2],px=s2[2];
	if(pr>px) t=pr,pr=px,px=t;
	if((pr=='A'||pr=='B'||pr=='C')&&(px=='D'||px=='F'))
		{cout<<"00";stop;}
	cout<<1<<((px-pr==1||(pr=='D'&&px=='F'))?1:0);
	stop;
}
