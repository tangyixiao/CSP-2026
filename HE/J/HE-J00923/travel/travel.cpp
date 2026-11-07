#include <bits/stdc++.h>
using namespace std;
#define gc getchar()
#define pb push_back
typedef long long ll;
const int N=1e6+6;
ll rd() {
	ll x=0,f=1; char c=gc;
	for(;c<'0'||c>'9';c=gc)if(c=='-')f=-1;
	for(;c>='0'&&c<='9';x=x*10+c-'0',c=gc);
	return x*f;
}
string c1,c2,s1,s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) cout<<"0000";
	else {
		if(s1[0]==s2[0]&&s1[1]==s2[1]) {
			char i=s1[2],j=s2[2];
			if(i=='A') {
				if(j=='B') cout<<"1111";
				else if(j=='C') cout<<"1110";
				else cout<<"1100";
			} else if(i=='B') {
				if(j=='A'||j=='C') cout<<"1111";
				else cout<<"1100";
			} else if(i=='C') {
				if(j=='A') cout<<"1110";
				else if(j=='B') cout<<"1111";
				else cout<<"1100";
			} else if(i=='D') {
				if(j=='F') cout<<"1111";
				else cout<<"1100";
			} else {
				if(j=='D') cout<<"1111";
				else cout<<"1100";
			}
		} else cout<<"1000";
	}
	return 0;
}
