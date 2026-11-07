#include<bits/stdc++.h>
using namespace std;
int x,y;
string s,t;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	if(!cin>>x>>s>>y>>t)cout<<"0000",return 0;
	if(x!=y)cout<<"0000";
	else{
		cout<<1;
		if(s[0]==t[0]&&s[1]==t[1]){
			cout<<1;
			if(s[2]<='C'&&t[2]<='C'||s[2]>'C'&&t[2]>'C'){
				cout<<1;
				if(abs(s[2]-t[2])==1)cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
		
	}
}
