#include <bits/stdc++.h>
using namespace std;

string s,s_,o;
int c,c_;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	
	cin >> c >> s >> c_ >> s_;
	
	if(c==c_){
		o+="1";
		if(s[0]==s_[0]&&s[1]==s_[1]){
			o+="1";
			if((s[2]<='C'&&s_[2]<='C')||(s[2]>'C'&&s_[2]>'C')){
				o+="1"; 
				if((s[2]>'C'&&s_[2]>'C')||(s[2]+1==s_[2])||(s_[2]+1==s[2])){o+="1";}
				else o+="0";
			}
			else o+="00";
		}
		else o+="000";
	}
	else o+="0000";
	
	cout << o;
} 
