#include<bits/stdc++.h>
#define int long long
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
using namespace std;

signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int c1,c2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		cout << 1;
		if(s1.substr(0,2)==s2.substr(0,2)){
			cout << 1;
			if(s1[2]<='C'&&s2[2]<='C'||s1[2]>'C'&&s2[2]>'C'){
				cout << 1;
				if(abs(s1[2]-s2[2])==1){
					cout << 1;
				} else {
					cout <<0;
				}
			} else {
				cout << "00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}