#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000\n";
		return 0;
	}
	else{
		cout<<"1";
		if(s1[0]!=s2[0]||s1[1]!=s2[1]){
			cout<<"000\n";
			return 0;
		}
		else{
			cout<<"1";
			if(s1[2]=='A'&&s2[2]=='B'){
				cout<<"11\n";
				return 0;
			}
			if(s1[2]=='A'&&s2[2]=='C'){
				cout<<"10\n";
				return 0;
			}
			if(s1[2]=='B'&&s2[2]=='C'){
				cout<<"11\n";
				return 0;
			}
			if(s1[2]=='D'&&s2[2]=='F'){
				cout<<"11\n";
				return 0;
			}
			if(s1[2]=='B'&&s2[2]=='A'){
				cout<<"11\n";
				return 0;
			}
			if(s1[2]=='C'&&s2[2]=='A'){
				cout<<"10\n";
				return 0;
			}
			if(s1[2]=='C'&&s2[2]=='B'){
				cout<<"11\n";
				return 0;
			}
			if(s1[2]=='F'&&s2[2]=='D'){
				cout<<"11\n";
				return 0;
			}
			cout<<"00\n";
			return 0;
		}
	}
	return !"I'm xcb";
}
/*
I want to shang mihuo xingwei big shang!!!
X X XXX
O O OOO
I want to da bao an
*/