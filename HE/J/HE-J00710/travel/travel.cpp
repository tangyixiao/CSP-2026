#include <bits/stdc++.h>
using namespace std;
void OI(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
}
string c1,s1,c2,s2;
string ans="0000";
void solve(){
	if(c1!=c2)return;
	ans[0]='1';
	if(s1[0]!=s2[0]||s1[1]!=s2[1])return;
	ans[1]='1';
	if(s1[2]>='A'&&s1[2]<='C'){
		if(s2[2]>='D'&&s2[2]<='E')return;
		ans[2]='1';
	}else{
		if(s2[2]>='A'&&s2[2]<='C')return;
		ans[2]='1';
	}
	if(abs(s2[2]-s1[2])!=1)return;
	ans[3]='1';
}
int main(){
	OI();
	cin>>c1>>s1>>c2>>s2;
	solve();
	cout<<ans;
	return 0;
}
