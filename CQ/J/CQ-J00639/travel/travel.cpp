#include <bits/stdc++.h>
using namespace std;
string s1,s2;
string ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	int c1,c2;
	cin>>c1>>s1;
	cin>>c2>>s2;
	ans="0000";
	if(c1==c2){
		ans[0]='1';
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			ans[1]='1';
			if(((s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F'))||((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='A'&&s2[2]<='C'))){
				ans[2]='1';
				if((s1[2]-s2[2]<=1||s1[2]=='D'&&s2[2]=='F')&&!((s1[2]=='C'&&s2[2]=='D')||(s2[2]=='C'&&s1[2]=='D'))){
					ans[3]='1';
				}
			}
		}	
	}
	for(int i=0;i<4;i++){
		cout<<ans[i];
	}
	return 0;
} 
