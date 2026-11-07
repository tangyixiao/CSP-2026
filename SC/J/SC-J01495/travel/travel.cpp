#include<bits/stdc++.h>
using namespace std;

string c, s, ci, si;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>ci>>si;
	if(c[0] == ci[0] && c[1] == ci[1]){
		cout<<1;
		if(s[0] == si[0] && s[1] == si[1]){
			cout<<1;
			int b = 0;
			if(s[2] == 'A' || s[2] == 'B' || s[2] == 'C'){
				if(si[2] == 'A' || si[2] == 'B' || si[2] == 'C'){
					cout<<1;
					b = 1;
				}
			}
			if(s[2] == 'F' || s[2] == 'D'){
				if(si[2] == 'F' || si[2] == 'D'){
					cout<<1;
					b = 1;
				}
			}
			if(b == 1){
				if(abs((s[2] - '0') - (si[2] - '0')) == 1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
		return 0;
	}
	return 0;
} 