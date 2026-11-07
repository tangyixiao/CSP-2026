#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;

	if(s1!=s2&&c1!=c2){
		cout<<0000;
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[2]){
		if(s1[s1.size()-1]=='F'&&s2[s2.size()-1]=='D'||s1[s1.size()-1]=='D'&&s2[s2.size()-1]=='F'||s1[s1.size()-1]=='A'&&s2[s2.size()-1]=='B'||s1[s1.size()-1]=='A'&&s2[s2.size()-1]=='C'||s1[s1.size()-1]=='B'&&s2[s2.size()-1]=='C'||s1[s1.size()-1]=='B'&&s2[s2.size()-1]=='A'||s1[s1.size()-1]=='C'&&s2[s2.size()-1]=='B'||s1[s1.size()-1]=='C'&&s2[s2.size()-1]=='A'){
			if(s1[2]==s2[2]){
				cout<<1111;
				return 0;
			}
			else if(s1[2]!=s2[2]){
				cout<<1110;
				return 0;}
		}
		else{
			if(s1[2]==s2[2]){
				cout<<1101;
				return 0;
			}
			else if(s1[2]!=s2[2]){
				cout<<1100;
				return 0;}
			
		}
	}
	else{
		if(s1[s1.size()-1]=='F'&&s2[s2.size()-1]=='D'||s1[s1.size()-1]=='D'&&s2[s2.size()-1]=='F'||s1[s1.size()-1]=='A'&&s2[s2.size()-1]=='B'||s1[s1.size()-1]=='A'&&s2[s2.size()-1]=='C'||s1[s1.size()-1]=='B'&&s2[s2.size()-1]=='C'||s1[s1.size()-1]=='B'&&s2[s2.size()-1]=='A'||s1[s1.size()-1]=='C'&&s2[s2.size()-1]=='B'||s1[s1.size()-1]=='C'&&s2[s2.size()-1]=='A'){
			if(s1[2]==s2[2]){
				cout<<1011;
				return 0;
			}
			else if(s1[2]!=s2[2]){
				cout<<1010;
				return 0;}
		}
		else{
			if(s1[2]==s2[2]){
				cout<<1001;
				return 0;
			}
			else if(s1[2]!=s2[2]){
				cout<<1000;
				return 0;}
			
		}
	}

	
	
	
	return 0;	
}