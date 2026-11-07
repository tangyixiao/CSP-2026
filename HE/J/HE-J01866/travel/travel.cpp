#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2,ans="";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) ans+="1";
	else ans+="0";
	if(c1==c2 && s1[0]+s1[1]==s2[0]+s2[1]) ans+="1";
	else ans+="0";
	if(c1==c2 && (s1[2]<68)+(s2[2]<68)==2 && s1[0]+s1[1]==s2[0]+s2[1]) ans+="1";
	else ans+="0";
	if((s1[2]<68)+(s2[2]<68)==2 && abs(s1[2]-s2[2])==1 && c1==c2 && s1[0]+s1[1]==s2[0]+s2[1]) ans+="1";
	else ans+="0";
	cout<<ans;
	return 0;
}
