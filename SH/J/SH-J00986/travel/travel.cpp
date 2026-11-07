#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int g1,g2,l1,l2;
	string c1,c2,s1,s2,ans;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<'1';
	else cout<<'0';
	if(c1==c2 && s1[0]==s2[0] && s1[1]==s2[1])cout<<'1';
	else cout<<'0';
	if(s1[2]=='A' ||s1[2]=='B' || s1[2]=='C')g1=1;
	else g1=2;
	if(s2[2]=='A' ||s2[2]=='B' || s2[2]=='C')g2=1;
	else g2=2;
	if(c1==c2 && s1[0]==s2[0] && s1[1]==s2[1] &&g1==g2)cout<<'1';
	else cout<<'0';
	if(s1[2]=='A')l1=1;
	if(s1[2]=='B')l1=2;
	if(s1[2]=='C')l1=3;
	if(s1[2]=='D')l1=5;
	if(s1[2]=='F')l1=6;
	if(s2[2]=='A')l2=1;
	if(s2[2]=='B')l2=2;
	if(s2[2]=='C')l2=3;
	if(s2[2]=='D')l2=5;
	if(s2[2]=='F')l2=6;
	if(c1==c2 && s1[0]==s2[0] && s1[1]==s2[1] &&g1==g2 && (l1-l2==1 || l2-l1==1)){
		cout<<'1';
	}
	else cout<<'0';
	return 0;
}
