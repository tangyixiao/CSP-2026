#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,s2,s3,s4,ans;
	cin>>s>>s2>>s3>>s4;
	if(s==s3){
		if(s2[0]==s4[0]&&s2[1]==s4[1]){
			if((s2[2]=='A'&&s4[2]=='B')||(s2[2]=='B'&&s4[2]=='C')||(s2[2]=='D'&&s4[2]=='E')||(s4[2]=='A'&&s2[2]=='B')||(s4[2]=='B'&&s2[2]=='C')||(s4[2]=='D'&&s2[2]=='E'))  
				ans="1111";
			else if((s2[2]=='A'&&s4[2]=='C')||(s4[2]=='A'&&s2[2]=='C'))ans="1110";
			else ans="1100";
		}
		else ans="1000"; 
	}
	else   ans="0000";
	cout<<ans;
	return 0;
} 
