#include<bits/stdc++.h>
#define ll long long
#define N 110000
#define gtc getchar
#define ptc putchar
using namespace std;
inline ll read(){
	ll ans=0,w=1;
	char c=getchar();
	while(!isdigit(c)){
		if(c=='-') w=-1;
		c=getchar();
	}
	while(isdigit(c)){
		ans=ans*10+(c-'0');
		c=getchar();
	}
	return ans*w;
}
inline void write(ll ans){
	if(ans<0) ans=-ans,ptc('-');
	if(ans>9) write(ans/10);
	ptc(ans%10+'0');
}
string s,t,st,ts;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>t>>st>>ts;
	if(s==st) ptc('1');
	else{ptc('0'),ptc('0'),ptc('0'),ptc('0');return 0;}
	if(t[0]==ts[0]&&t[1]==ts[1]) ptc('1');
	else{ptc('0'),ptc('0'),ptc('0');return 0;}
	if((t[2]<='C'&&ts[2]<='C')||(t[2]>'C'&&ts[2]>'C')) ptc('1');
	else{ptc('0'),ptc('0');return 0;}
	if(t[2]-1==ts[2]||t[2]+1==ts[2]||(t[2]=='F'&&ts[2]=='D')||(t[2]=='D'&&ts[2]=='F')) ptc('1');
	else ptc('0');
	return 0;
}