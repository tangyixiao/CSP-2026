#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4,ans="";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3) ans+='1';
	else{
		ans+="0000";
		cout<<ans;
		return 0;
	}
	if(s2[0]==s4[0] && s2[1]==s4[1]) ans+='1';
	else{
		ans+="000";
		cout<<ans;
		return 0;
	}
	if((s2[2]<='C' && s4[2]<='C') || (s2[2]>='D' && s4[2]>='D')) ans+='1';
	else{
		ans+="00";
		cout<<ans;
		return 0;
	}
	if(abs(s2[2]-s4[2])==1) ans+='1';
	else ans+='0';
	cout<<ans;
	return 0;
}
