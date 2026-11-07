#include <bits/stdc++.h>
using namespace std;
string cN,sN,cM,sM;
int n,m;
bool a,b,c,d;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cN>>sN>>cM>>sM;
	if(sN[2]=='A') n=1;
	if(sN[2]=='B') n=2;
	if(sN[2]=='C') n=3;
	if(sN[2]=='D') n=5;
	if(sN[2]=='F') n=6;
	
	if(sM[2]=='A') m=1;
	if(sM[2]=='B') m=2;
	if(sM[2]=='C') m=3;
	if(sM[2]=='D') m=5;
	if(sM[2]=='F') m=6;
	
	if(cN==cM) {
		a=1;
		if(sN[0]==sM[0] and sN[1]==sM[1]) {
			b=1;
			if((n<=3 and m<=3)or(n>=5 and m>=5)) {
				c=1;
				if(n-m==1 or n-m==-1) {
					d=1;
				}
			}
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
}
