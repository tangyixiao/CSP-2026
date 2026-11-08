#include<bits/stdc++.h>
#define I using
#define AK namespace
#define cspJ std
I AK cspJ;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string c1,s1,c2,s2;
	string ans="0000";
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ans[0]='1';
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			ans[1]='1';
			int a,b;
			a=s1[2]-'A';
			b=s2[2]-'A';
			if(0<=a&&a<=2&&0<=b&&b<=2){
				ans[2]='1';
				if(abs(a-b)==1){
					ans[3]='1';
				}
			}
			else if(3<=a&&a<=4&&3<=b&&b<=4){
				ans[2]='1';
				ans[3]='1';
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}
