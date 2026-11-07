#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ans="1000";
		if(s1[0]==s2[0] and s1[1]==s2[1]){
			ans="1100";
			if(s1[2]=='A'){
				if(s2[2]=='B') ans="1111";
				else if(s2[2]=='C') ans="1110";
				else ans="1100";
			}else if(s1[2]=='B'){
				if(s2[2]=='A' or s2[2]=='C') ans="1111";
				else ans="1100";
			}else if(s1[2]=='C'){
				if(s2[2]=='B') ans="1111";
				else if(s2[2]=='A') ans="1110";
				else ans="1100";
			}else if(s1[2]=='D'){
				if(s2[2]=='F') ans="1111";
				else ans="1100";
			}else if(s1[2]=='F'){
				if(s2[2]=='D') ans="1111";
				else ans="1100";
			}
		}else ans="1000";
	}else ans="0000";
	cout<<ans;
	return 0;
}