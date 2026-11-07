#include<bits/stdc++.h>
using namespace std;
int c1,s1,c2,s2;
char a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>a>>c2>>s2>>b;
	if(c1!=c2){
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}else if(s1!=s2){
		cout<<1<<0<<0<<0;
	}else if((a=='A'||a=='B'||a=='C')&&(b=='A'||b=='B'||b=='C')){
		cout<<1<<1<<1;
		if(a=='A'&&b=='B'||a=='B'&&(b=='A'||b=='C')||a=='C'&&b=='B')cout<<1;
		else cout<<0;
	}else if(a=='D'&&b=='F'||a=='D'&&b=='F'){
		cout<<1<<1<<1<<1;
	}else{
		cout<<1<<1<<0<<0; 
	}
	return 0;
} 
