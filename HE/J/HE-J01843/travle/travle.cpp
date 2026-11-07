#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travle","r",stdin);
	freopen("travle","w",stdout);
	string s1,s2,ans="",x1,x2,a,b;
	int c,d;
	cin>>a>>s1>>b>>s2;
	x1=s1[2];
	x2=s2[2];
	if(a==b){
		ans+="1";
		c=s1[0]+'0'*10+s1[1]+'0';
		d=s2[0]+'0'*10+s2[1]+'0';
		if(c==d){
			ans+="1";
			if(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))){
				ans+="1";
			}else{
				ans+="0";
			}
			if(ans[2]!='0'){
				if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')){
					ans+="1";
				}else if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')){
					ans+="1";
				}else{
					ans+="0";
				}
			}else{
				ans+="0";
			}
		}else{
			ans+="000";
		}
	}else{
		ans+="0000";
	}
	
		cout<<ans;
}
