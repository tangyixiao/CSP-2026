#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]) cout<<1;
	else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]){
		if(s1[2]-'A'<=2&&s2[2]-'A'<=2||s1[2]-'A'>2&&s2[2]-'A'>2) cout<<1;
		else cout<<0;
	}else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]){
		int x=s1[2]-'A',y=s2[2]-'A';
		if(x<=2&&y<=2||x>2&&y>2){
			if(abs(x-y)==1) cout<<1;
			else cout<<0;
		}else cout<<0;
	}else cout<<0;
	return 0;
}
