#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	string a,b;
	bool ce,lin=0;
	a=s1[0]+s1[1];
	b=s2[0]+s2[1];
	if(s1[2]=='A'){
		ce=(s2[2]=='B'||s2[2]=='C');
		lin=(s2[2]=='B');
	}
	else if(s1[2]=='B'){
		ce=(s2[2]=='A'||s2[2]=='C');
		lin=(s2[2]=='A'||s2[2]=='C');
	}
	else if(s1[2]=='C'){
		ce=(s2[2]=='A'||s2[2]=='B');
		lin=(s2[2]=='B');
	}
	else if(s1[2]=='D'){
		ce=(s2[2]=='F');
		lin=(s2[2]=='F');
	}
	else if(s1[2]=='F'){
		ce=(s2[2]=='D');
		lin=(s2[2]=='D');
	}
	if(c1==c2){
		cout<<1;
		cout<<(a==b);
		cout<<((a==b)&&ce);
		cout<<((a==b)&&ce&&lin);
	}else{
		cout<<"0000";
	}
	
} 
