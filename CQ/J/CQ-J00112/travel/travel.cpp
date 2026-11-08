#include<bits/stdc++.h>
using namespace std;
#define ll long long
string c,s,c1,s1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c>>s>>c1>>s1;
	if(c==c1){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(s[0]==s1[0]&&s[1]==s1[1]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(s[2]>='D'&&s1[2]>='D'){
		cout<<1;
	}else if(s[2]<='C'&&s1[2]<='C'){
		cout<<1;
	}else cout<<0;
	if(s[2]>='D'&&s1[2]>='D'){
		cout<<1;
	}else if(s[2]<='C'&&s1[2]<='C'){
		if(s[2]=='B'||s1[2]=='B'){
			cout<<1;
		}else cout<<0;
	}else cout<<0;
	return 0;
}
