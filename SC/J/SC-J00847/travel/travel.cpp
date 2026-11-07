#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int s11=stoi(s1.substr(0,2));
	int s22=stoi(s2.substr(0,2));
	bool b1=(c1==c2);
	bool b2=false;
	if(b1) b2=(s11==s22);
	bool b3=false;
	if(b2) {
		if(s1[2]=='A'&&(s2[2]=='B' || s2[2]=='C')) b3=true;
		if(s1[2]=='B'&&(s2[2]=='A' || s2[2]=='C')) b3=true;
		if(s1[2]=='C'&&(s2[2]=='A' || s2[2]=='B')) b3=true;
		if(s1[2]=='D'&&s2[2]=='F') b3=true;
		if(s1[2]=='F'&&s2[2]=='D') b3=true;
	}
	bool b4=false;
	if(b3) {
		int a,b;
		a=s1[2]+'0';
		b=s2[2]+'0';
		b4=(abs(a-b)==1);
	}
	cout<<b1<<b2<<b3<<b4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}