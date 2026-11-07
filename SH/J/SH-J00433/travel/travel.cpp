#include<bits/stdc++.h>;
using namespace std;
int change(string s){
	return (s[0]-'0')*10+(s[1]-'0');
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.ans","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans="0000";
	if(c1!=c2){
		cout<<ans;
		return 0;
	}
	ans[0]='1';
	int h1=change(s1),h2=change(s2);
	if(h1!=h2) {
		cout<<ans;
		return 0;
	}
	ans[1]='1';
	if((s1[2]>='D')^(s2[2]>='D')){
		cout<<ans;
		return 0;
	}
	ans[2]='1';
	if(abs(s1[2]-s2[2])==1) ans[3]='1';
	cout<<ans;
 	return 0;
}
