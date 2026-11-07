#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b;
	cin>>a>>b;
	if(a[0]==b[0]){
		cout<<1;
		if(a[1]==b[1]){
			cout<<1;
			int c=0,d=0;
			if(a[2]=='A'||a[2]=='B'||a[2]=='C'){
				c=1;
			}else{
				c=2;
			}
			if(b[2]=='A'||b[2]=='B'||b[2]=='C'){
				d=1;
			}else{
				d=2;
			}
			if(c==d){
				cout<<1;
				if(c==2){
					cout<<1;
				}else if(a[2]=='B'||b[2]=='B'){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<00;
			}
		}else{
			cout<<000;
		}
	}else{
		cout<<0000;
	}
} 
