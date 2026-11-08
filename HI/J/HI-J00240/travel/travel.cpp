#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int a,b;
	cin>>c1>>s1>>c2>>s2;
	a=s1[2];
	b=s2[2];
	if(c1==c2) cout<<'1';	
	else cout<<'0';
	
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]) cout<<'1';
	else cout<<'0';
		
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='C'||s1[2]=='D')&&(s2[2]=='C'||s2[2]=='D'))))
	cout<<'1';
	else cout<<'0';
	
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='C'||s1[2]=='D')&&(s2[2]=='C'||s2[2]=='D')))&&(a+1==b||a-1==b))
		cout<<'1';
	else cout<<'0';
	return 0;
}
