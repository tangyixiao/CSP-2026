#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
int ok=1,np=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	if(c==cc) cout<<"1";
	else {
	cout<<"0";
	ok=0;
	}
	if(s[0]==ss[0]&&s[1]==ss[1]&&ok==1) cout<<"1";	
	else {
	cout<<"0";
	ok=0;
	}
	if(((s[2]<='C'&&ss[2]<='C')||(s[2]>'C'&&ss[2]>'C'))&&ok==1){
	cout<<"1";
	if(s[2]>'C'&&ss[2]>'C') np=1;
	}
	else {
	cout<<"0";
	ok=0;
	}
	if((s[2]+1==ss[2]||(s[2]==ss[2]+1)||np==1)&&ok==1) cout<<"1";
	else {
	cout<<"0";
	}
	return 0;
 } 
