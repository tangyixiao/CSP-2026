#include<bits/stdc++.h>
using namespace std;
#define int long long
string s[5];
int a,b,c,d;
char e,f;

signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	for(int i=0;i<4;i++){
		cin>>s[i];
	}
	a=(s[0][0]-'0')*10+s[0][1]-'0';
	b=(s[1][0]-'0')*10+s[1][1]-'0';
	c=(s[2][0]-'0')*10+s[2][1]-'0';
	d=(s[3][0]-'0')*10+s[3][1]-'0';
	e=s[1][2];
	f=s[3][2];
	if(a==c){
		cout<<1;
		if(b==d){
			cout<<1;
			if((e<'D'&&f<'D')||(e>'C'&&f>'C')){
				cout<<1;
				if(abs(e-f)==1){
					cout<<1;
				}else{
					cout<<0;
				} 
			}else{
				cout<<0<<0;
			} 
		}else{
			cout<<0<<0<<0;
		} 
	}else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}

