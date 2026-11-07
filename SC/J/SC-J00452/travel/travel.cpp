#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,c,s1,c1;
	cin>>s>>c>>s1>>c1;
	if(s1==s){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(c[0]==c1[0]&&c[1]==c1[1]){
		cout<<1;
		if((c[2]=='D'&&c1[2]=='F') || (c[2]=='F'&&c1[2]=='D') || (c[2]=='A' && c1[2]=='B') || (c[2]=='A' && c1[2]=='C') || (c[2]=='B' && c1[2]=='A') || (c[2]=='B' && c1[2]=='C') || (c[2]=='C' && c1[2]=='A') || (c[2]=='C' && c1[2]=='B')){
			cout<<1;
		}else{
			cout<<0;
		}
		if((c[2]=='D'&&c1[2]=='F') || (c[2]=='F'&&c1[2]=='D') || (c[2]=='A' && c1[2]=='B')|| (c[2]=='B' && c1[2]=='A') || (c[2]=='B' && c1[2]=='C')  || (c[2]=='C' && c1[2]=='B')){
			cout<<1;
		}else{
			cout<<0;
		}
		
	}else{
		cout<<"000";
	}
}