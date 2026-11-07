#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,c2,s1,s2;
string ans;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		ans+='1';
	}else{
		ans+='0';
	}
	
	if(ans[0]!='0'&&s1[0]==s2[0]&&s1[1]==s2[1]){
		ans+='1';
	}else{
		ans+='0';
		ans+='0';
		ans+='0';
	}
	
	if(ans.size()==4){
		cout<<ans;
		return 0;
	}else{
		if(s1[2]<='C'&&s2[2]<='C'){
			ans+='1';
		}else if(s1[2]>'C'&&s2[2]>'C'){
			ans+='1';
		}else{
			ans+='0';
			ans+='0';
		}
	}
	
	if(ans.size()==4){
		cout<<ans;
		return 0;
	}else{
		if(abs(s1[2]-s2[2])==1){
			ans+='1';
			cout<<ans;
			return 0;
		}else{
			ans+='0';
			cout<<ans;
		}
	}
	return 0;
}