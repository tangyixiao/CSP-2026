#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,c1,s2,c2;
	cin>>s1>>c1>>s2>>c2;
	string ans="";
	if(s1==s2){
		ans+="1";
		if(c1.substr(0,2)==c2.substr(0,2)){
			ans+='1';
			int a1=c1[2]-'A',a2=c2[2]-'A';
			if(a1<=2&&a2<=2||a1>2&&a2>2){
				ans+="1";
				if(abs(a1-a2)==1) ans+="1";
				else ans+="0";
			} 
			else ans+="00";
		}
		else ans+="000";
	}
	else ans+="0000";
	
	cout<<ans;
} 
