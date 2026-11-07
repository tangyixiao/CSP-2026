#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a=0;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else{cout<<"0000";
		return 0;}
	if(s1[0]==s2[0] and s1[1]==s2[1]) cout<<1;
	else{cout<<"000";
		return 0;}
	if(s1[2]<=67 and s2[2]<=67){a=0;
		cout<<1;
	}else if(s1[2]=='D' and s2[2]=='F' or s1[2]=='F' and s2[2]=='D'){a=1;
		cout<<1;
	}else{cout<<"00";
		return 0;}
	if(a==1)cout<<1;
	else if(s1[2]=='B' or s2[2]=='B') cout<<1;
	else cout<<0;
	return 0;
}