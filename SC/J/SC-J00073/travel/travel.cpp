#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	char b1[10],b2[10];
	cin>>c1>>b1>>c2>>b2;
	if(c1!=c2) cout<<"0000";
	else {
		cout<<1;
		if(b1[0]!=b2[0]||b1[1]!=b2[1]) cout<<"000";
		else {
			cout<<1;
			char c1=b1[2],c2=b2[2];
			if(c1=='A') {
				if(c2=='B') cout<<11;
				else if(c2=='C') cout<<10;
				else cout<<"00";
			}
			else if(c1=='B') {
				if(c2=='A'||c2=='C') cout<<11;
				else cout<<"00";
			}
			else if(c1=='C') {
				if(c2=='B') cout<<11;
				else if(c2=='A') cout<<10;
				else cout<<"00";
			} else {
				if(c2=='D'||c2=='F') cout<<11;
				else cout<<"00";
			}
		}
	}
	return 0;
}