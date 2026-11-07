#include <bits/stdc++.h>
using namespace std;
using ll=long long;
string c1,c2,s1,s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>s1>>s2;
	if (c1==s1) {
		cout<<"1";
		if (c2.substr(0,2)==s2.substr(0,2)) {
			cout<<"1";
			if (c2[2]>='D' && s2[2]>='D') {
				cout<<"11"<<endl;
			}
			else if (c2[2]<='C' && s2[2]<='C') {
				cout<<"1";
				if (abs(c2[2]-s2[2])==1) cout<<"1"<<endl;
				else cout<<"0"<<endl;
			}
			else cout<<"00"<<endl;
		}
		else cout<<"000"<<endl;
	}
	else cout<<"0000"<<endl;
	return 0;
}
