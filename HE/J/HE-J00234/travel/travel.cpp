#include<bits/stdc++.h>
using namespace std;
int x,r;
string s,s2;
bool flag,flag2,flag3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>x>>s;
	cin>>r>>s2;
	if(x==r){
		cout<<1;
		flag=1;
	}else{
		cout<<0;
	}
	if(flag){
		if(s[0]==s2[0]&&s[1]==s2[1]){
			cout<<1;
			flag2=1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	if(flag2){
		if(s[2]=='A'){
			if(s2[2]=='B'){
				flag3=1;
				cout<<1;
			}else if(s2[2]=='C'){
				cout<<1;
			}else{
				cout<<0;
			}
		}else if(s[2]=='B'){
			if(s2[2]=='A'||s2[2]=='C'){
				flag3=1;
				cout<<1;
			}else{
				cout<<0;
			}
		}else if(s[2]=='C'){
			if(s2[2]=='B'){
				flag3=1;
				cout<<1;
			}else if(s2[2]=='A'){
				cout<<1;
			}else{
				cout<<0;
			}
		}else if(s[2]=='D'){
			if(s2[2]=='F'){
				flag3=1;
				cout<<1;
			}else{
				cout<<0;
			}
		}else if(s[2]=='F'){
			if(s2[2]=='D'){
				flag3=1;
				cout<<1;
			}else{
				cout<<0;
			}
		}
	}else{
		cout<<0;
	}
	if(flag3){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
