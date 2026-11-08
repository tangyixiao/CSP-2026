#include<bits/stdc++.h>
using namespace std;
bool SB(string s,string ss){
	int o=0;
	s.erase(2);
	ss.erase(2);
	if(s==ss){
		return true;
	}
	return false;
}
bool BS(string s,string ss){
	char x=s[2],xc=ss[2];
	if((x>='A'&&xc>='A'&&x<='C'&&xc<='C')||((x=='D'&&xc=='F')||(x=='F'&&xc=='D'))){
		return true;
	}
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,cc,ss;
	cin>>c>>s>>cc>>ss;
	if(c==cc) cout<<1;
	else cout<<0;
	if(c==cc&&SB(s,ss)==true) cout<<1;
	else cout<<0;
	if(c==cc&&SB(s,ss)==true&&BS(s,ss)==true) cout<<1;
	else cout<<0;
	int SBBS=s[2]-ss[2];
	if(c==cc&&SB(s,ss)==true&&BS(s,ss)==true&&abs(SBBS)==1) cout<<1;
	else cout<<0;
	return 0;
}
