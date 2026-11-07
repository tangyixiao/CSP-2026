#include<bits/stdc++.h>
using namespace std;
int x,y;
char a[10],b[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>a+1>>y>>b+1;
	if(x==y){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(a[1]==b[1]&&a[2]==b[2]){
		cout<<1;
	} 
	else{
		cout<<0;
	}
	if((a[3]<='C'&&b[3]<='C')||(a[3]>'C'&&b[3]>'C')){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if((a[3]>'C'&&b[3]>'C')){
		cout<<1;
	}
	else{
		if((a[3]<='C'&&b[3]<='C')){
			if(a[3]-b[3]==1||b[3]-a[3]==1){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else{
			cout<<0;
		}
	}
	return 0;
} 
