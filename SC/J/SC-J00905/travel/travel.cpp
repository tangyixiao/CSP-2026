#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int ida,idb;
	string s1,s2;
	cin>>ida>>s1>>idb>>s2;
	
	if(ida==idb) cout<<1;
	else return cout<<"0000",0;
	
	if(s1[0]==s2[0] && s1[1]==s2[1]) cout<<1;
	else return cout<<"000",0;
	
	if(s1[2]=='D' || s1[2]=='F' && s2[2]=='D' || s2[2]=='F') cout<<1;
	else if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C' && s2[2]=='A' || s2[2]=='B' || s2[2]=='C') cout<<1;
	else return cout<<"00",0;
	if(s1[2]=='D' || s1[2]=='F' || s2[2]=='D' || s2[2]=='F'){
		if(s1[2]-'A'+2==s2[2]-'A' || s1[2]-'A'-2==s2[2]-'A') cout<<1;
		else return cout<<"0",0;
	}else if(s1[2]-'A'+1==s2[2]-'A' || s1[2]-'A'-1==s2[2]-'A') cout<<1;
	else return cout<<"0",0;
    return 0;
}
