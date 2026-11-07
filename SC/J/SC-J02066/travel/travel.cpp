#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		int x1=(s1[0]-'0')*10+s1[1]-'0';
		int x2=(s2[0]-'0')*10+s2[1]-'0';
		if(x1==x2){
			cout<<1;
			char h1=s1[2],h2=s2[2];
			if(h1=='F')h1='E';
			if(h2=='F')h2='E';
			if('A'<=h1&&h1<='C'){
				if('A'<=h2&&h2<='C'){
					cout<<1;
					if(abs(h1-h2)==1){
						cout<<1;
					}else cout<<0;
				}else cout<<0<<0;
			}else{
				if('A'<=h2&&h2<='C'){
					cout<<0<<0;
				}else{
					cout<<1;
					if(abs(h1-h2)==1){
						cout<<1;
					}else cout<<0;
				}
			}
		}else cout<<0<<0<<0;	
	}else cout<<0<<0<<0<<0;
	return 0;
}