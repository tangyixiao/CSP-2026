#include<bits/stdc++.h>
using namespace std;

string a,a1,b,b1;


int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>a>>a1>>b>>b1;
	int x=(a[0]-'0')*10+(a[1]-'0');
	int y=(b[0]-'0')*10+(b[1]-'0');
	int c=(a1[0]-'0')*10+(a1[1]-'0');
	int d=(b1[0]-'0')*10+(b1[1]-'0');
	if(x!=y){
		cout<<"0000";
	}
	else{
		cout<<"1";
		if(c!=d){
			cout<<"000";
		}
		else{
			cout<<"1";
			if(b1[2]=='D'&&a1[2]=='F') cout<<"11";
			else if(b1[2]=='F'&&a1[2]=='D') cout<<"11";
			
			else if(b1[2]=='A'&&a1[2]=='B') cout<<"11";
			else if(b1[2]=='A'&&a1[2]=='C') cout<<"10";
			else if(b1[2]=='B'&&a1[2]=='A') cout<<"11";
			else if(b1[2]=='B'&&a1[2]=='C') cout<<"11";
			else if(b1[2]=='C'&&a1[2]=='A') cout<<"10";
			else if(b1[2]=='C'&&a1[2]=='B') cout<<"11";
			else cout<<"00";
		}
	}
	return 0;
} 
