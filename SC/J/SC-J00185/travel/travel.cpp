#include<bits/stdc++.h>
using namespace std;
int a,c;
string b,d;
int main(){
	freopen(travel.in,"r",stdin);
	freopen(travel.out,"w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c) cout<<1;
	else{
		cout<<"0000";
		return 0;
	} 
	int f1=(b[0]-'0')*10+(b[1]-'0');
	int f2=(d[0]-'0')*10+(d[1]-'0');
	if(f1==f2) cout<<1;
	else{
		cout<<"000";
		return 0;
	} 
	char s1=b[2],s2=d[2];
	if(s1=='F'&&s2=='D'||s1=='C'&&s2=='B'||s1=='B'&&s2=='A'||s1=='D'&&s2=='F'||s1=='B'&&s2=='C'||s1=='A'&&s2=='B')cout<<"11";
	else if(s1=='C'&&s2=='A'||s1=='A'&&s2=='C')cout<<"10";
	else cout<<"00";
	return 0;
} 1