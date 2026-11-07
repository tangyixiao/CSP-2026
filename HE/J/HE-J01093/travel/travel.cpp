#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2,ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) ans="0000";
	else
		if(s1[0]==s2[0]&&s1[1]==s2[1])
			if(s1[2]=='A')
				if(s2[2]=='B') ans="1111";
				else if(s2[2]=='C') ans="1110";
				else ans="1100";
			else if(s1[2]=='B')
				if(s2[2]=='A'||s2[2]=='C') ans="1111";
				else ans="1100";
			else if(s1[2]=='C')
				if(s2[2]=='B') ans="1111";
				else if(s2[2]=='A') ans="1110";
				else ans="1100";
			else if(s1[2]=='D')
				if(s2[2]=='F') ans="1111";
				else ans="1100";
			else
				if(s2[2]=='D') ans="1111";
				else ans="1100";
		else ans="1000";
	cout<<ans<<endl;
	return 0;
}
