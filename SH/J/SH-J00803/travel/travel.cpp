#include<bits/stdc++.h>
using namespace std;
int x,y;
string s,t;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>s>>y>>t;
	if(x!=y){
		cout<<"0000";
	}
	else{
		cout<<'1';
		int a=0,b=0;
		a+=s[0]-'0';
		b+=t[0]-'0';
		a=a*10+s[1]-'0';
		b=b*10+t[1]-'0';
		if(a!=b){
			cout<<"000";
			return 0;
		}
		cout<<'1'; 
		a=a*10;
		if(s[2]=='A')a++;
		if(s[2]=='B')a+=2;
		if(s[2]=='C')a+=3;
		if(s[2]=='D')a+=4;
		if(s[2]=='F')a+=5;
		b=b*10;
		if(t[2]=='A')b++;
		if(t[2]=='B')b+=2;
		if(t[2]=='C')b+=3;
		if(t[2]=='D')b+=4;
		if(t[2]=='F')b+=5;
		if((a%10<=3&&b%10<=3)||(a%10>=4&&b%10>=4)){
			cout<<'1';
			if(abs(a%10-b%10)==1)cout<<'1';
			else cout<<'0';
		}
		else cout<<"00";
	}
}
