#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2,ans="";
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1)ans+='1';
	else ans+='0';
	if(ans[0]=='1'&&a2[0]==b2[0]&&a2[1]==b2[1])ans+='1';
	else ans+='0';
	if(ans[1]=='1'&&((a2[2]>='A'&&a2[2]<='C'&&b2[2]>='A'&&b2[2]<='C')||(a2[2]>='D'&&a2[2]<='E'&&b2[2]>='D'&&b2[2]<='E')))ans+='1';
	else ans+='0';
	if(ans[2]=='1'&&(b2[2]==a2[2]-1||a2[2]==b2[2]-1))ans+='1';
	else ans+='0';
	cout<<ans<<endl;
	return 0;
} 
