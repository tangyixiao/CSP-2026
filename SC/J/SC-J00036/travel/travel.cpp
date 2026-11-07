#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans;
bool check1(string a,string b){
	for(int i=0;i<2;i++){
		if(a[i]!=b[i])return false;
	}
	return true;
}
bool check2(string a,string b){
	if((a[2]+1==b[2])||(b[2]+1==a[2])||(a[2]=='D'&&b[2]=='F')||(a[2]=='F'&&b[2]=='D'))return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
	ans+='1';
	if(check1(s1,s2)){
		ans+='1';
		if(((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D'))){
			ans+='1';
			if(check2(s1,s2))ans+='1';
			else ans="1110";
		}
		else ans="1100";
	}
	else ans="1000";
	}
	else ans="0000";
	cout<<ans;
	return 0;
}