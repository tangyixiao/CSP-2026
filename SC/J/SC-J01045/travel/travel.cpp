#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c,C;string s,S;cin>>c>>s>>C>>S;
	
	if(c==C){
		cout<<'1';
		if(s[0]==S[0]&&s[1]==S[1]){
			cout<<'1';
			if((s[2]<'D'&&S[2]<'D')||(s[2]>='D'&&S[2]>='D')){
				cout<<'1';
				if((s[1]==S[1]&&abs(s[2]-S[2])==1)||(s[2]==s[2]&&abs(s[1]-S[1])==1))cout<<1;
				else cout<<'0';
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
}