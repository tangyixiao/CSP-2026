#include<bits/stdc++.h>
using namespace std;
string r,x,c,s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r>>c>>x>>s;
	if(r==x){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(c[0]==s[0]&&c[1]==s[1]){
		cout<<1;
	}else{
		cout<<0;
	}
	if(c[2]<='C'&&s[2]<='C'&&c[0]==s[0]&&c[1]==s[1]){
		cout<<1;
		if(pow(s[2]-c[2],2)==1){
			cout<<1;
		}else{
			cout<<0;
		}
	}else if(c[2]>'C'&&s[2]>'C'&&c[0]==s[0]&&c[1]==s[1]){
				cout<<1;
			if(pow(s[2]-c[2],2)==1){
				cout<<1;
			}else{
				cout<<0;
			}
	}else{
		cout<<"00";
	}
	return 0;
}