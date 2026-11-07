#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travei.out","w",stdout);
	int c1,c2;
	string s1,s2;
	string ans;
	cin>>c1>>c2>>s1>>s2;
	if(c1=c2){
		ans+="1";
	}
	else if(c1!=c2){
		ans+="0";
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		ans+="1";
	}else{
		ans+="1";
	}
	if(s1[2]+s2[2]=='A'+'C'or'B'){
		ans+="1";
	}else{
		ans+="0";
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&s1[2]+s2[2]=='A'+'B'or'D'+'F')
	{
		ans+="1";
	}
	else if(s1[2]+s2[2]=='A'+'C'){
		ans+="0";
	}
	else{
		ans+="0000";
	}
	cout<<ans<<endl;
	return 0;
}
