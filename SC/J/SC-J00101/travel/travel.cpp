#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool sbq(char a,char b){
	if(a<'D'&&b<'D'){
		return true;
	}
	if(a>'C'&&b>'C'){
		return true;
	}
	return false;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
		else cout<<"0";
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]) cout<<"1";
		else cout<<"0";
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&sbq(s1[2],s2[2])) cout<<"1";
		else cout<<"0";
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&sbq(s1[2],s2[2])
	&&abs(s1[2]-s2[2])==1) cout<<"1";
		else cout<<"0";
	return 0;
}