#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	string s11=s1.substr(0,2),s21=s2.substr(0,2);
	if(s11==s21)cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	char a=s1[2],b=s2[2];
	if(a>b)swap(a,b);
	if((a=='A'||a=='B'||a=='C')&&(b=='D'||b=='F'))cout<<0;
	else cout<<1;
	if(a=='A'&&b=='B'||a=='B'&&b=='C'||a=='D'&&b=='F')cout<<1;
	else cout<<0;
	return 0;
}

