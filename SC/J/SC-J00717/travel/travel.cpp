#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool a,b;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<"1";
	else{
		cout<<"000";
		return 0; 
	}
	if(s1[2]=='D'||s1[2]=='F') a=true;
	if(s2[2]=='D'||s2[2]=='F') b=true;
	if(a==b) cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(a==1&&b==1)cout<<"1";
	else if(s1[2]+1==s2[2]||s1[2]-1==s2[2])
		cout<<"1";
	else cout<<"0";
	
	return 0;
}