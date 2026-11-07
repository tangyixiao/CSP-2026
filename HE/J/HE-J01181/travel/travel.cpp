#include<bits/stdc++.h>
using namespace std;
bool ans[4];
bool k;
inline int comp1(char a,char b) {
	if ((a=='D'&&b=='F')||(a=='C'&&b=='A')||(a=='C'&&b=='B')||(a=='B'&&b=='A')||(a=='B'&&b=='C')||(a=='A'&&b=='B')||(a=='A'&&b=='C')) {
		return true;
	}
	return false;
}
inline int dy(string a,string b) {
	if (a[1]==b[1]&&a[2]==b[2]) {
		k=true;
	}
	k=false;
}
int main() {
	ios::sync_with_stdio (false);
	cin.tie(0);
	cout.tie(0);
	freopen ("travel.in","r",stdin);
	freopen ("travel.out","w",stdout);
	string a,c;
	string b,d;
	cin>>a>>b>>c>>d;
	if (a[1]==c[1]&&a[2]==c[2]) {
		k=true;
	} 
	else k=false;
	//cout<<k<<endl;
	if (k==true) {
		ans[1]=true;
		if (b[1]==d[1]&&b[2]==d[2]) {
			ans[2]=true;
			if (comp1(b[3],d[3])==true) {
				ans[3]=true;
				if((b[3]=='D'&&d[3]=='F')||(b[3]=='F'&&d[3]=='D')||(b[3]=='A'&&d[3]=='B')||(b[3]=='B'&&d[3]=='C')||(b[3]=='C'&&d[3]=='B')||(b[3]=='B'&&d[3]=='A')) {
					ans[4]=true;
				} else {
					ans[4]=false;
				}
			} else  {
				ans[3]=false;
			}
		} else
			ans[2]=false;
	} 
	else {
		ans[1]=false;
		ans[2]=false;
		ans[3]=false;
		ans[4]=false;
	}
	for(int i=1; i<=4; i++) {
		cout<<ans[4];
	}


	return 0;
}
