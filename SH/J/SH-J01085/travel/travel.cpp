#include<bits/stdc++.h>
using namespace std;
string a,aa,b,bb;
string ans="";
int main(){
	freopen("travel.in" , "r" , stdin);
    freopen("travel.out" , "w" , stdout);
	cin>>a>>aa>>b>>bb;
	if(a!=b){
		ans="0000";
		cout<<ans;
		return 0;
	}
	else{
		ans+="1";
		if(aa[0]==bb[0]&&aa[1]==bb[1]){
			ans+="1";
			if(((aa[2]=='A'||aa[2]=='B'||aa[2]=='C')&&(bb[2]=='A'||bb[2]=='B'||bb[2]=='C'))||((aa[2]=='D'||aa[2]=='F')&&(bb[2]=='D'||bb[2]=='F'))){
				ans+="1";
				if((aa[2]=='A'&&bb[2]=='B')||(aa[2]=='B'&&(bb[2]=='C'||bb[2]=='A'))||(aa[2]=='C'&&bb[2]=='B')||(aa[2]=='D'&&bb[2]=='F')||(aa[2]=='F'&&bb[2]=='D')||(bb[2]=='A'&&aa[2]=='B')||(bb[2]=='B'&&(aa[2]=='C')||aa[2]=='A')||(bb[2]=='C'&&aa[2]=='B')||(bb[2]=='D'&&aa[2]=='F')||(bb[2]=='F'&&aa[2]=='D')){
					ans+="1";
				}
				else{
					ans+="0";
				}
			}
			else{
				ans+="00";
			}
		}
		else{
			ans+="000";
		}
	}
	cout<<ans;
	return 0;
} 
