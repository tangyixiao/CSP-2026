#include<bits/stdc++.h>
#define int long long
using namespace std;
string c,s,cc,ss;
string u;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	cin>>c>>s>>cc>>ss;
	if(c==cc){
		u=u+'1';
	}
	else{
		cout<<"0000"<<endl;
		return 0;
	}
	string so,sso;
	char a,c;
	a=s[s.size()-1];
	c=ss[ss.size()-1];
    for(int i=0;i<s.size()-1;i++){
    	so+=s[i];
	}
	for(int i=0;i<ss.size()-1;i++){
		sso+=ss[i];
	}
	if(sso==so){
		u+='1';
	} 
	else{
		cout<<"1000"<<endl;
		return 0;
	}
	if(((int)(a-64)<=3 && (int)(c-64)<=3) || (a=='D' &&c=='F') || (a=='F' && c=='D')){
		u=u+'1';
	}
	else{
		cout<<"1100"<<endl;
		return 0;
	}
	if((a=='A' && c=='B') || (a=='B' && c=='C') || (a=='D' && c=='F') || (a=='B' && c=='A') || (a=='C' && c=='B') || (a=='F' && c=='D')){
		u+='1';
		cout<<u<<endl;
	}
	else{
		cout<<"1110"<<endl;
		return 0;
	}
	return 0;
} 
