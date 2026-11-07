#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)cout<<"0000";
	else{
		if((s1[0]!=s2[0])||(s1[1]!=s2[1]))cout<<"1000";
		else{
			char x=s1[2],r=s2[2];
			if(((x=='A')||(x=='B')||(x=='C'))&&((r=='A')||(r=='B')||(r=='C'))){
				if(abs(x-r)==1)cout<<"1111";
				else cout<<"1110";
			}
			else if(((x=='D')||(x=='F'))&&((r=='D')||(r=='F'))){
				cout<<"1111";
			}
			else cout<<"1100";
		}
	}
	return 0;
}