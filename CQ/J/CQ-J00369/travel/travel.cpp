#include <bits/stdc++.h>
using namespace std;
string sa,sb,a,b;
char ca,cb;
bool ff(char c){
	if(c-'A'<3) return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>sa>>b>>sb;
	ca=sa[2],cb=sb[2],sa=sa[0]+sa[1],sb=sb[0]+sb[1];
	if(a==b){
		cout<<"1";
		if(sa==sb){
			cout<<"1";
			if(ca>=cb) swap(ca,cb);
			bool fa=ff(ca),fb=ff(cb);
			if(fa==fb){
				cout<<"1";
				if((ca=='A'&&cb=='B')||(ca=='B'&&cb=='C')||(ca=='D'&&ca=='F')) cout<<"1";
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
