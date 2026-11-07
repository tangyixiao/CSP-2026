#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	long long a=s1[3]-'0';
	long long b=s2[3]-'0';
	a+=1;
	b-=1;
	if (c1==c2){
		cout<<1;
		if (s1[1]+s1[2]==s2[1]+s2[2]){
			cout<<1;
			if (s1[3]=='A'||s1[3]=='B'||s1[3]=='C'){
				if (s2[3]=='A'||s2[3]=='B'||s2[3]=='C') {
					cout<<1;
					if (a==s2[3]-'0'||b==s2[3]-'0'){
						cout<<1;
					} 
					else {
						cout<<0;
					}
				}
				else {
					cout<<00;
				}
			}
			if (s1[3]=='D'||s1[3]=='E'){
				if (s2[3]=='D'||s2[3]=='E') {
					cout<<1;
					if (a==s2[3]-'0'||b==s2[3]-'0'){
						cout<<1;
					} 
					else {
						cout<<0;
					}
				}
				else {
					cout<<00;
				}
			}
		}
		else {
			cout<<000;
		}
	}	
	else {
		cout<<0000;	
	}
	

	return 0;
} 