#include<bits/stdc++.h>
using namespace std;
string s1a,s1b,s2a,s2b,ans;
signed main(){
	freopen("traval.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1a>>s1b>>s2a>>s2b;
	if(s1a[0]==s2a[0]&&s1a[1]==s2a[1]){
		ans+='1';
	}
	else ans+='0';
	if(ans[0]=='1'&&s1b[0]==s2b[0]&&s1b[1]==s2b[1]){
		ans+='1';
	}
	else ans+='0';
	if(ans[1]=='1'){
		if((s1b[2]=='A'||s1b[2]=='B'||s1b[2]=='C')&&s2b[2]=='A'||s2b[2]=='B'||s2b[2]=='C'){
			ans+='1';
		}
		else if((s1b[2]=='D'||s1b[2]=='F')&&(s2b[2]=='D'||s2b[2]=='F')){
			ans+='1';
		}
		else ans+='0';
	}
	else ans+='0';
	if(ans[2]=='1'){
		if(s1b[2]<='C'&&s2b[2]<='C'){
			if(abs(s1b[2]-s2b[2])==1){
				ans+='1';
			}
			else ans+='0';
		}
		else{
			if(s1b[2]=='D'&&s2b[2]=='F'){
				ans+='1';
			}
			else if(s1b[2]=='F'&&s2b[2]=='D'){
				ans+='1';
			}
			else ans+='0';
		}
	}
	else ans+='0';
	cout<<ans;
	return 0;
}
