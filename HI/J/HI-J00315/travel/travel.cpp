#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1-c2)cout<<"0000";
	else{
		cout<<1;
		if(s1[0]*10+s1[1]-s2[0]*10-s2[1])cout<<"000";
		else{
			cout<<1;
			if(s1[2]<'D'&&s2[2]>'C'||s1[2]>'C'&&s2[2]<'D')cout<<"00";
			else cout<<1<<!(s1[2]=='A'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='A');
		}
	}
	return 0;
}
