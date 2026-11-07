#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	string s1,s2;
	int c1,c2,a1,a2;
	char b1,b2;
	cin>>c1>>s1>>c2>>s2;
	b1=s1[2],b2=s2[2];
	a1=(s1[0]-'0')*10+s1[1]-'0';
	a2=(s2[0]-'0')*10+s2[1]-'0';
	if(c1!=c2) cout<<"0000";
	else{
		if(a1!=a2) cout<<"1000";
		else{
			if((b1<='C'&&b2>'C')||(b2<='C'&&b1>'C')) cout<<"1100";
			else{
				if((b1=='A'&&b2=='C')||(b2=='A'&&b1=='C')) cout<<"1110";
				else cout<<"1111";
			}
		}
	}
	return 0;
} 