#include<bits/stdc++.h>
#define int long long
using namespace std;
bool check(char a,char b){
	if(a=='A'||a=='B'||a=='C'){
		if(b=='D'||b=='F')	return 0;
		else	return 1;
	}
	else{
		if(b=='A'||b=='B'||b=='C')	return 0;
		else	return 1;
	}
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool o1=0,o2=0,o3=0;
	if(c1==c2){
		o1=1;
		cout<<1;	
	}
	else	cout<<0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&o1){
		o2=1;
		cout<<1;
	}
	else	cout<<0;
	if(check(s1[2],s2[2])&&o2){
		o3=1;
		cout<<1;
	}
	else	cout<<0;
	if(((s1[2]=='B'||s2[2]=='B')||(s1[2]=='D'||s1[2]=='F'))&&o3)	cout<<1;
	else	cout<<0;
	return 0;
}