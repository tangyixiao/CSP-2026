#include<bits/stdc++.h>
#define int long long
using namespace std;
struct N{
	string c;
	string s;
};
signed main(){
	freopen("trave.in","r",stdin);
	freopen("trave.out","w",stdout);
	N r,x;
	cin>>r.c>>r.s>>x.c>>x.s;
	if(r.c==x.c){
		cout<<"1";
		if(r.s[0]==x.s[0] && r.s[1]==x.s[1] ){
			cout<<"1";
			if((r.s[2]=='D' && x.s[2]=='F') || (r.s[2]=='F' && x.s[2]=='D') || (r.s[2]=='A' && x.s[2]=='B') || (r.s[2]=='A' && x.s[2]=='C') || (r.s[2]=='B' && x.s[2]=='C') ||  (r.s[2]=='B' && x.s[2]=='A') ||  (r.s[2]=='C' && x.s[2]=='A') ||  (r.s[2]=='C' && x.s[2]=='B')){
				cout<<"1";
				if((r.s[2]=='D' && x.s[2]=='F') || (r.s[2]=='F' && x.s[2]=='D') || (r.s[2]=='A' && x.s[2]=='B') ||(r.s[2]=='B' && x.s[2]=='C') ||  (r.s[2]=='B' && x.s[2]=='A') || (r.s[2]=='C' && x.s[2]=='B')){
					cout<<"1";
				}
				else{
					cout<<"0";
					return 0;
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	return 0;
} 
