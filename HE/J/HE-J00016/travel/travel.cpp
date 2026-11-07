#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	int c1a,c2a;
	c1a=(c1[0]-'0')*10;
	c1a+=(c1[1]-'0');
	c2a=(c2[0]-'0')*10;
	c2a+=(c2[1]-'0');
	if(c1a==c2a){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	int s1a=(s1[0]-'0')*10;
	s1a+=(s1[1]-'0');
	int s2a=(s2[0]-'0')*10;
	s2a+=(s2[1]-'0');
	if(s1a==s2a){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	char s1b=s1[2];
	char s2b=s2[2];
	bool flag=false;
	bool fff=false;
	if(s1b=='A'){
		if(s2b=='B'||s2b=='C'){
			flag=true;
		}
		if(s2b=='B'){
			fff=true;
		}
	}
	else if(s1b=='B'){
		if(s2b=='A'||s2b=='C'){
			flag=true;
		}
		if(s2b=='A'||s2b=='C'){
			fff=true;
		}
	}
	else if(s1b=='C'){
		if(s2b=='A'||s2b=='B'){
			flag=true;
		}
		if(s2b=='B'){
			fff=true;
		}
	}
	else if(s1b=='D'){
		if(s2b=='F'){
			flag=true;
		}
		if(s2b=='F'){
			fff=true;
		}
	}
	else if(s1b=='F'){
		if(s2b=='D'){
			flag=true;
		}
		if(s2b=='D'){
			fff=true;
		}
	}
	if(flag){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(fff){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
} 
