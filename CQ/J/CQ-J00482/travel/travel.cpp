#include<bits/stdc++.h>
using namespace std;
string c,c1,s,s1,da;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>c1>>s>>s1;
	if(c==s)da=da+"1";
	else{cout<<"0000";return 0;}
	if(c1[0]==s1[0]&&c1[1]==s1[1])da=da+"1";
	else {cout<<"1000";return 0;}
	if(c1[2]=='A'||c1[2]=='B'||c1[2]=='C'&&s1[2]=='A'||s1[2]=='B'||s1[2]=='C')da=da+"1";
	else if(c1[2]=='D'||c1[2]=='F'&&c1[2]=='D'||c1[2]=='F')da=da+"1";
	else {cout<<"1100";return 0;}
	int t=(c1[2]-'A');
	int t1=(s1[2]-'A');
	if(abs(t-t1)==1)da=da+"1";
	else{cout<<"1110";return 0;}
	cout<<da;
	return 0;
}
