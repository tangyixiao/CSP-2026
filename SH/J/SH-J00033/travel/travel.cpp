#include<bits/stdc++.h>
#define int long long
using namespace std; 
string c1,s1,c2,s2;
string ans="0000"; 
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)ans[0]='1';
	else{
		cout<<ans;
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1])ans[1]='1';
	else{
		cout<<ans;
		return 0;
	}
	if(s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D'){
		ans[2]='1';
		ans[3]='1';
	} 
	if(s1[2]=='A'){
		if(s2[2]=='B'){
			ans[2]='1';
			ans[3]='1';
		}
		if(s2[2]=='C'){
			ans[2]='1';
		}
	}else if(s1[2]=='B'){
		if(s2[2]=='A'||s2[2]=='C'){
			ans[2]='1';
			ans[3]='1';
		}
	} else{
		if(s2[2]=='B'){
			ans[2]='1';
			ans[3]='1';
		}
		if(s2[2]=='A'){
			ans[2]='1';
		}
	}
	cout<<ans;
	return 0;
}
