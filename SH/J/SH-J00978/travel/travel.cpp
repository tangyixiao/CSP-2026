#include<bits/stdc++.h>
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r_c,r_s,x_c,x_s;
	bool flag=1;
	cin>>r_c>>r_s>>x_c>>x_s;
	if(r_c == x_c){
		cout<<1;
	}
	else{
		cout<<0;
		flag=0;
	}
	if(r_s[0] == x_s[0] && r_s[1] == x_s[1] && flag){
		cout<<1;
	}
	else{
		cout<<0;
		flag=0;
	}
	if((r_s[2] == 'A' && x_s[2] == 'B' || r_s[2] == 'A' && x_s[2] == 'C' || r_s[2] == 'B' && x_s[2] == 'C' || r_s[2] == 'D' && x_s[2] == 'F' || r_s[2] == 'B' && x_s[2] == 'A' || r_s[2] == 'C' && x_s[2] == 'A' || r_s[2] == 'C' && x_s[2] == 'B' || r_s[2] == 'F' && x_s[2] == 'D') && flag){
		cout<<1;
	}
	else{
		cout<<0;
		flag=0;
	}
	if((r_s[2] == 'A' && x_s[2] == 'B' || r_s[2] == 'B' && x_s[2] == 'C' || r_s[2] == 'D' && x_s[2] == 'F' || r_s[2] == 'B' && x_s[2] == 'A' || r_s[2] == 'C' && x_s[2] == 'B' || r_s[2] == 'F' && x_s[2] == 'D') && flag){
		cout<<1;
	}
	else{
		cout<<0;
		flag=0;
	}
	return 0;
}
