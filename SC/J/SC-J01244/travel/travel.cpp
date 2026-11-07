#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;cin>>c1>>s1>>c2>>s2;
	int sf1,sf2;
	if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C') sf1=1;
	else sf1=2;
	if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C') sf2=1;
	else sf2=2;
	if(c1==c2){
		cout<<"1"; 
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			cout<<"1";
			if(sf1==sf2){
				cout<<"1";
				if(sf1==2) cout<<"1";
				else if((s1[2]=='A' && s2[2]=='B') || (s1[2]=='B' && s2[2]=='A') || (s1[2]=='B' && s2[2]=='C') || (s1[2]=='C' && s2[2]=='B')) cout<<"1";
				else cout<<"0"; 
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}