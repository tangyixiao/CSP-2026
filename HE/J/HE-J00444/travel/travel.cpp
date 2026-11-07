#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a=0,b=0,c=0,d=0;
string ca,sa,cb,sb;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	std::cin.tie(nullptr)->std::ios::sync_with_stdio(false);
	cin>>ca>>sa>>cb>>sb;
	if(ca!=cb){
		a=0;
		b=0;
		c=0;
		d=0;
		cout<<a<<b<<c<<d<<'\n';
		return 0;
	}
	else{
		a=1;
		if(sa[0]!=sb[0]||sa[1]!=sb[1]){
			b=0;
			c=0;
			d=0;
			cout<<a<<b<<c<<d<<'\n';
			return 0;
		}
		else{
			b=1;
			if(sa[2]=='A'){
				if(sb[2]=='B'){
					c=1;
					d=1;
				}
				if(sb[2]=='C'){
					c=1;
				}
			}
			if(sa[2]=='B'){
				if(sb[2]=='A'){
					c=1;
					d=1;
				}
				if(sb[2]=='C'){
					c=1;
					d=1;
				}
			}
			if(sa[2]=='C'){
				if(sb[2]=='A'){
					c=1;
				}
				if(sb[2]=='B'){
					c=1;
					d=1;
				}
			}
			if(sa[2]=='D'){
				if(sb[2]=='F'){
					c=1;
					d=1;
				}
			}
			if(sa[2]=='F'){
				if(sb[2]=='D'){
					c=1;
					d=1;
				}
			}
			cout<<a<<b<<c<<d<<'\n';
			return 0;
		}
	}
	return 0;
}
