#include<bits/stdc++.h>
#include<string>
using namespace std;
string c1,s1,c2,s2,ans="";
inline bool chk(char a,char b){
	if((a>='A'&&a<='C'&&b>='A'&&b<='C')|(a>='D'&&a<='F'&&b>='D'&&b<='F')) return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) ans+="1";
	else ans+="0";
	{
		vector<char> p1(2),p2(2);
		p1.push_back(s1[0]);
		p1.push_back(s1[1]);
		p2.push_back(s2[0]);
		p2.push_back(s2[1]);
		if(ans[0]=='1'&&p1==p2) ans+='1';
		else ans+='0';
	}
	{
		char p1=s1[2],p2=s2[2];
		if(ans[0]=='1'&&ans[1]=='1'&&chk(p1,p2)) ans+='1';
		else ans+='0';
	}
	{
		char p1=s1[2],p2=s2[2];
		if(ans[0]=='1'&&ans[1]=='1'&&ans[2]=='1'&&(abs(p1-p2)==1)) ans+='1';
		else ans+='0';
	}
	cout<<ans;
	return 0;
}
