#include<bits/stdc++.h>
using namespace std;
string s1,b1,s2,b2,c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>b1>>s2>>b2;
	if(s1==s2) cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	for(int i=0;i<=1;i++){
		c1+=b1[i];
		c2+=b2[i];
	}
	if(c1==c2) cout<<1;
	else{
		cout<<0<<0<<0;
		return 0;
	}
	for(int i=1;i<=2;i++){
		if(b1[2]=='C'){
			if(b2[2]=='D'){
				cout<<0<<0;
				return 0;	
			}	
		}
	}
	cout<<1;
	for(int i=1;i<=2;i++){
		if(b1[2]=='A'){
			if(b2[2]=='B') cout<<1;
			else cout<<0;
			return 0;
		}
		if(b2[2]=='A'){
			if(b1[2]=='B') cout<<1;
			else cout<<0;
			return 0;
		}
		if(b1[2]=='B'){
			if(b2[2]=='A'||b2[2]=='C') cout<<1;
			else cout<<0;
			return 0;
		}
		if(b2[2]=='B'){
			if(b1[2]=='A'||b1[2]=='C') cout<<1;
			else cout<<0;
			return 0;
		}
		if(b1[2]=='C'){
			if(b2[2]=='B') cout<<1;
			else cout<<0;
			return 0;
		}
		if(b2[2]=='C'){
			if(b1[2]=='B') cout<<1;
			else cout<<0;
			return 0;
		}
		if(b1[2]=='D'){
			if(b2[2]=='F') cout<<1;
			else cout<<0;
			return 0;
		}
		if(b2[2]=='D'){
			if(b1[2]=='F') cout<<1;
			else cout<<0;
			return 0;
		}
		if(b1[2]=='F'){
			if(b2[2]=='D') cout<<1;
			else cout<<0;
			return 0;
		}
		if(b2[2]=='F'){
			if(b1[2]=='D') cout<<1;
			else cout<<0;
			return 0;
		}
	}
	return 0;
}
