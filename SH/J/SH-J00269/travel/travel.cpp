#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	//同一车厢 
	if(c1==c2) cout<<1;
	else cout<<0;
	//同一排 
	if((c1==c2) && (s1[0]==s2[0] && s1[1]==s2[1])) cout<<1;
	else cout<<0;
	//同一侧 
	if((c1==c2) && (s1[0]==s2[0] && s1[1]==s2[1])){
		if(('A'<=s1[2]&&s1[2]<='C') && ('A'<=s2[2]&&s2[2]<='C')) cout<<1;
		else if(('D'==s1[2]||s1[2]=='F') && ('D'==s2[2]||s2[2]=='F')) cout<<1;
		else cout<<0;
	}else cout<<0;
	//相邻 AB BA BC CB DF FD 
	if((s1[2]=='D'&&s2[2]=='F') || (s1[2]=='F'&&s2[2]=='D')) cout<<1;
	else{
		if((s1[2]=='A' || s1[2]=='C')&&s2[2]=='B') cout<<1;
		else if(s2[1]=='B' && (s2[2]=='A' || s2[2]=='C')) cout<<1;
		else cout<<0;
	}
	return 0;
}
