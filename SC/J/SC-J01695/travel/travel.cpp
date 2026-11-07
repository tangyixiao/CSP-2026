#include<bits/stdc++.h>
using namespace std;

string c1,s1;
string c2,s2;

bool a,b,c,d;

void readset(){
	freopen("travel.out","w",stdout);
	freopen("travel.in","r",stdin);
}

int main(){
	readset();
	cin>>c1>>s1>>c2>>s2;
	
	a=(c1==c2);
	b=(a&&s1[0]==s2[0]&&s1[1]==s2[1]);
	
	if(b==1){
		     if(s1[2]=='F'&&s2[2]!='D')c=0;
		else if(s1[2]=='D'&&s2[2]!='F')c=0;
		else if(s1[2]!='F'&&s2[2]=='D')c=0;
		else if(s1[2]!='D'&&s2[2]=='F')c=0;
		else c=1;
	}
	
	if(c==1){
		if(abs(s1[2]-s2[2])==1)d=1;
		else d=0;
	}
	
	cout<<a<<b<<c<<d;
	return 0;
}