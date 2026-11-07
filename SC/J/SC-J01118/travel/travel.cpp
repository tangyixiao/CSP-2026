#include<bits/stdc++.h>
#define int long long 
using namespace std;

signed main(){	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string c1,s1,c2,s2; cin>>c1>>s1>>c2>>s2;
	string ans="";
	if(c1!=c2) ans="0000";
	else{
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			ans+="11";
			bool l1=((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')?1:0);
			bool l2=((s2[2]=='D'||s2[2]=='F')?1:0);
			if((l1==1&&l2==0)||(l1==0&&l2==1)){
				ans+="1";
				if((s1[2]=='A'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='A')) ans+="0";
				else ans+="1"; 
			} else ans+="00";
		} else ans="1000";
	}
	cout<<ans;
	return 0;
}