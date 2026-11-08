#include<bits/stdc++.h>
using namespace std;

int c1,c2;
string s1,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int xiang1,x2,xiang4,x5;
	char x3,x6;
	cin>>xiang1>>x2>>x3>>xiang4>>x5>>x6;
	if(xiang1==xiang4){
		cout<<1;
		if(x2==x5){
			cout<<1;
			if('A'<=x3&&x3<='C'&&'A'<=x6&&x6<='C'||'D'<=x3&&x3<='F'&&'D'<=x6&&x6<='F'){
				cout<<1;
				if(int(x3)+1==int(x6)||int(x6)+1==int(x3)){
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
	
	
	
	return 0;//Trick||Treat!
} 
