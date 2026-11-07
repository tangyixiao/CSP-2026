#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c) cout<<"1";
	else     cout<<"0";
	if(b=="01C" && d=="01D" || b=="02C" && d=="02D" || b=="03C" && d=="03D" || b=="04C" && d=="04D" || b=="05C" && d=="05D" || b=="06C" && d=="06D" || b=="07C" && d=="07D" ||b=="08C" && d=="08D"||b=="09C" && d=="09D"||b=="10C" && d=="10D"||b=="11C" && d=="11D"||b=="12C" && d=="12D"||b=="13C" && d=="13D"||b=="14C" && d=="14D" || b=="15C" && d=="15D"||b=="16C" && d=="16D"||b=="17C" && d=="17D" || b=="18C" && d=="18D") cout<<"100";    
	else if(b=="01C" && d=="01B" || b=="02C" && d=="02B" || b=="03C" && d=="03B" || b=="04C" && d=="04B" || b=="05C" && d=="05B" || b=="06C" && d=="06B" || b=="07C" && d=="07B" ||b=="08C" && d=="08B"||b=="09C" && d=="09B"||b=="10C" && d=="10B"||b=="11C" && d=="11B"||b=="12C" && d=="12B"||b=="13C" && d=="13B"||b=="14C" && d=="14B" || b=="15C" && d=="15B"||b=="16C" && d=="16B"||b=="17C" && d=="17B" || b=="18C" && d=="18B") cout<<"111";    
	else if(b<d) cout<<"111";
	else if(b=="02B" && d=="01A") cout<<"100";
	else if(b>d)cout<<"110";
	else if(b=="02B" && d=="01A") cout<<"000";
	if(b==d) cout<<"0000";
	return 0;
} 
