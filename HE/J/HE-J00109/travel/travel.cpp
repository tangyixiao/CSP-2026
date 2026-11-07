#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2,a;
int n,m;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	n=stoi(c1);m=stoi(c2);
	if(n!=m) {
		for(int i=0;i<=3;i++){
			cout<<'0';
		}
		return 0;
	}
	else a+='1';
	
	n=stoi(s1.substr(0,2));
	m=stoi(s2.substr(0,2));
	if(n!=m) a+='0';
	else a+='1';
	
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'&&a[1]=='1') a+='1';
	else if((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='D'&&s2[2]<='F')||a[1]=='0') a+='0';
	else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'&&a[1]=='1') a+='1';
	else if((s1[2]>='D'&&s1[2]<='F'&&s2[2]>='A'&&s2[2]<='C')||a[1]=='0') a+='0';
	if(n!=m) a+='0';
	else{
		if(s1[2]=='A'&&s2[2]!='B') a+='0';
		else if(s1[2]=='B'&&s2[2]!='A'&&s2[2]!='C') a+='0';
		else if(s1[2]=='C'&&s2[2]!='B') a+='0';
		else if(s1[2]=='D'&&s2[2]!='F') a+='0';
		else if(s1[2]=='F'&&s2[2]!='D') a+='0';
		else a+='1';
	}
	cout<<a;
	return 0;
}
