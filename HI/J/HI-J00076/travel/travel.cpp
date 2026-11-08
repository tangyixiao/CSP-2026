#include<bits/stdc++.h>
using namespace std;
string s,s2,s3,s4,s5="ABC",s6="DF";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s2>>s3>>s4;
	if(s!=s3)cout<<"0000";
	else{
		cout<<"1";
		if(s2.substr(0,2)!=s4.substr(0,2))cout<<"000";
		else{
			cout<<"1";
			if(!(s5.find(s2[2])!=-1&&s5.find(s4[2])!=-1||s6.find(s2[2])!=-1&&s6.find(s4[2])!=-1))cout<<"00";
			else{
				cout<<"1";
				if(s2[2]=='D'&&s4[2]=='F'||s2[2]=='F'&&s4[2]=='D'||s2[2]=='B'&&(s4[2]=='A'||s4[2]=='C')
				||(s2[2]=='A'||s2[2]=='C')&&s4[2]=='B')cout<<"1";
				else cout<<"0";
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

