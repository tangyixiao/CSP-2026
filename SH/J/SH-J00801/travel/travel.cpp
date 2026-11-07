#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel5.in","w",stdin);
	freopen("travel.out","r",stdout);
	string c1,s1,c2,s2;
	string ans;
		cin>>c1>>s1>>c2>>s2; 
	if(c1==c2){//³µÏá 
		ans="1";
		if(s1[0]==s2[0] && s1[1]==s2[1]){//ÅÅ 
			ans+="1";
			if(s1[2]<='C'&&s1[2]>='A'&&s2[2]<='C'&&s2[2]>='A'){
				ans+="1";
				if(s1[2]<='C'&&s1[2]>='B'&&s2[2]<='C'&&s2[2]>='B')ans+="1";
				else if(s1[2]<='B'&&s1[2]>='A'&&s2[2]<='B'&&s2[2]>='A')ans+="1";
				else ans+="0";
			}
			else if(s1[2]<='F'&&s1[2]>='D'&&s2[2]<='F'&&s2[2]>='D'){
				ans+="11";
			}
			else ans+="00";
		}
		else ans+="000";
	}
	else ans="0000";
	cout<<ans<<endl;
	return 0;
}
