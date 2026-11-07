#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1])cout<<'1';
	else{
		cout<<"0000";return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1])cout<<'1';
	else{
		cout<<"000";return 0;
	}
	char t1=s1[2],t2=s2[2];
	if(t1=='A'||t1=='B'||t1=='C'){
		if(t2=='A'||t2=='B'||t2=='C')cout<<'1';
		else{
			cout<<"00";return 0;
		}
	}
	if(t1=='D'||t1=='F'){
		if(t2=='D'||t2=='F')cout<<'1';
		else{
			cout<<"00";return 0;
		}
	}
	if(t1=='A'&&t2=='B')cout<<'1';
	else if(t1=='B'&&t2=='A')cout<<'1';
	else if(t1=='B'&&t2=='C')cout<<'1';
	else if(t1=='C'&&t2=='B')cout<<'1';
	else if(t1=='D'&&t2=='F')cout<<'1';
	else if(t1=='F'&&t2=='D')cout<<'1';
	else cout<<'0';
	return 0;
} 