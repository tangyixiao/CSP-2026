#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool f1=false,f2=false,f3=false,f4=false;
	if(c1==c2) f1=true;
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2)) f2=true;
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2)){
		char a=s1[2];char b=s2[2];
		if(a>='A'&&a<='C'&&b>='A'&&b<='C') f3=true;
		else if(a>='D'&&a<='E'&&b>='D'&&b<='E') f3=true;
	}
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2)){
		char a=s1[2];char b=s2[2];
		if(a=='A'&&b=='B') f4=true;
		else if(a=='B'&&b=='A') f4=true;
		else if(a=='B'&&b=='C') f4=true;
		else if(a=='C'&&b=='B') f4=true;
		else if(a=='D'&&b=='E') f4=true;
		else if(a=='E'&&b=='D') f4=true;
	} 
	if(f1==true) cout<<1;
	else cout<<0;
	if(f2==true) cout<<1;
	else cout<<0;
	if(f3==true) cout<<1;
	else cout<<0;
	if(f4==true) cout<<1;
	else cout<<0;
    return 0;
}

