#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ans="";
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) ans+='1';
	else ans+='0';
	if(ans=="1" && s1[0]==s2[0] && s1[1]==s2[1]) ans+='1';
	else ans+='0';
	if(ans=="11" && ((s1[2]<='C' && s2[2]<='C')||(s1[2]>'C' && s2[2]>'C'))) ans+='1';
	else ans+='0';
	if(ans=="111" && abs(s1[2]-s2[2])==1) ans+='1';
	else ans+='0';
	cout<<ans;
	return 0;
}