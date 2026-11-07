#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,x,y;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<=1;i++){
		x+=s1[i];
		y+=s2[i];
	}
	if(c1==c2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(x==y) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(((s1[2]=='A' || s1[2]=='B' || s1[2]=='C') && (s2[2]=='A' || s2[2]=='B' || s2[2]=='C')) || ((s1[2]=='D' || s1[2]=='F') && (s2[2]=='F' || s2[2]=='D'))) cout<<1;
	else cout<<0;
	if((s1[2]=='D' || s1[2]=='F') && (s2[2]=='F' || s2[2]=='D')) cout<<1;
	else if((s1[2]=='A' && s2[2]=='B') || (s2[2]=='B' && s1[2]=='C') || (s1[2]=='B' && s2[2]=='A') || (s1[2]=='B' && s2[2]=='C')) cout<<1;
	else cout<<0;
	return 0;
}