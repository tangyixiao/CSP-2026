#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("traval.in","r",stdin);
	freopen("traval.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0] && s1[1]==s2[1]) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
 	if(s1[2]+"0"=="A" && s2[2]+"0"=="C") cout<<"1";
	else if(s1[2]+"0"=="C" && s2[2]+"0"=="A") cout<<"1";
	else if(s1[2]+"0"=="F" && s2[2]+"0"=="D") cout<<"1";
	else if(s1[2]+"0"=="D" && s2[2]+"0"=="F") cout<<"1";
	else if(s1[2]+"0"=="B" && (s2[2]+"0"=="A" || s2[2]+"0"=="C")) cout<<"1";
	else if((s1[2]+"0"=="A" || s1[2]+"0"=="C") && s2[2]+"0"=="B") cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if((s1[2]+"0")-(s2[2]+"0")==1) cout<<"1";
	else if((s1[2]+"0")-(s2[2]+"0")==-1) cout<<"1";
	else{
		cout<<"0";
	}
	return 0;
}