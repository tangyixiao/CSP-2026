#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) cout<<"0000";
	else{
		if(s1[0]!=s2[0]||s1[1]!=s2[1]) cout<<"1000";
		else{
			if(s1[2]-'0'+1==s2[2]-'0'){
				if(s1[2]=='C')cout<<"1100";
				else cout<<"1111";
			}
			else if(s1[2]-'0'-1==s2[2]-'0'){
				if(s2[2]=='C')cout<<"1100";
				else cout<<"1111";
			}
			else if(s1[2]-'0'+2==s2[2]-'0'){
				if(s1[2]=='A')cout<<"1110";
				else if(s1[2]=='D')cout<<"1111";
				else cout<<"1100";
			}
			else if(s1[2]-'0'-2==s2[2]-'0'){
				if(s2[2]=='A')cout<<"1110";
				else if(s2[2]=='D')cout<<"1111";
				else cout<<"1100";
			}
			else cout<<"1100";
		}
	}
	return 0;
}
