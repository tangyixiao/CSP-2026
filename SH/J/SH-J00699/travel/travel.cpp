#include<bits/stdc++.h>
using namespace std;
string a1,b1,a2,b2,ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ans="0000";
	cin>>a1>>b1>>a2>>b2;
	if(a1==a2){
		ans="1000";
		if(b1.substr(0,2)==b2.substr(0,2)){
			ans="1100";
			if(b1[2]=='A'&&b2[2]=='B'||b1[2]=='A'&&b2[2]=='C'||b1[2]=='C'&&b2[2]=='B'||b1[2]=='B'&&b2[2]=='A'||b1[2]=='B'&&b2[2]=='C'||b1[2]=='C'&&b2[2]=='A'||b1[2]=='D'&&b2[2]=='E'||b1[2]=='E'&&b2[2]=='D'){
				ans="1110";
				if(b1[2]=='A'&&b2[2]=='B'||b1[2]=='C'&&b2[2]=='B'||b1[2]=='B'&&b2[2]=='A'||b1[2]=='B'&&b2[2]=='C'||b1[2]=='D'&&b2[2]=='E'||b1[2]=='E'&&b2[2]=='D'){
					ans="1111";
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
} 
