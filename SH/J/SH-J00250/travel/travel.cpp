#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
bool ans1=true,ans2=true,ans3=true;

int main ()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	
	if (c1==c2) {
		cout<<1;
	}
	else {
		ans1=false;
		cout<<0;
	}
	
	if ((s1[0]==s2[0]&&s1[1]==s2[1])&&ans1==true) {
		cout<<1;
	}
	else {
		ans2=false;
		cout<<0;
	}
	
	
	if ((s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='A'||s1[2]=='A'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='A'||s1[2]=='B'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='B'||s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D')&&ans2==true) {
		cout<<1;
	}
	else {
		ans3=false;
		cout<<0;
	}
	
	if ((s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='A'||s1[2]=='B'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='B'||s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D')&&ans3==true) {
		cout<<1;
	}
	else {
		cout<<0;
	}
	
	return 0;
}
