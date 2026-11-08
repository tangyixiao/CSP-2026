#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,output;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			bool b1=(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D');
			bool b2=(s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B');
			if(b1||b2){
			    bool b3=(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D');
			    bool b4=(s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B');
			    if(b3||b4){
			    	output="1111";
				}else{
					output="1110";
				}
			}else{
				output="1100";
			}
		}else{
		    output="1000";
		}
	}else{
	    output="0000";
	}
	cout<<output;
	return 0;
}
