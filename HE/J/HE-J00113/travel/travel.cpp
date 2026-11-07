#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2,s="0000";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		s[0]='1';
		if(a2[0]==b2[0] && a2[1]==b2[1]){
			s[1]='1';
			if((a2[2]<='C') == (b2[2]<='C')){
				s[2]='1';
				if((a2[2]=='D' && b2[2]=='F') || (a2[2]=='F' && b2[2]=='D') || abs(a2[2]-b2[2])==1) s[3]='1';
			}
		}
	}
	cout<<s;
	return 0;
}
