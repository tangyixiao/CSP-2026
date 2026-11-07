#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ans="";
	string cx,cy,sx,sy;
	cin>>cx>>cy>>sx>>sy;
	int cxx=0,cl=0,sxx=0,sl=0;
	char c,s;
	cxx+=(cx[0]-'0')*10+cx[1]-'0';
	sxx+=(sx[0]-'0')*10+sx[1]-'0';
	cl+=(cy[0]-'0')*10+cy[1]-'0';
	sl+=(sy[0]-'0')*10+sy[1]-'0';
	c=cy[2];
	s=sy[2];
	if(cxx==sxx){
		ans+='1';
	}
	else{
		ans+='0';
	}
	if(cxx==sxx&&cl==sl){
		ans+='1';
	}
	else{
		ans+='0';
	}
	if(cxx==sxx&&cl==sl&&((c<='C'&&s<='C')||(s>'C'&&c>'C'))){
		ans+='1';
	}
	else{
		ans+='0';
	}
	if(cxx==sxx&&cl==sl&&((c<='C'&&s<='C')||(s>'C'&&c>'C'))&&abs(s-c)==1){
		ans+='1';
	}
	else{
		ans+='0';
	}
	cout<<ans<<'\n';
	return 0;
}
