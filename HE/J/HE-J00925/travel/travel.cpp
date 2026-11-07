#include<bits/stdc++.h>
using namespace std;
int x,y,o=0,p=0;
char a[3],b[3];
int main(){
	cin>>x;
	for(int i=0;i<=2;i++){
		cin>>a[i];
	}
	cin>>y;
	for(int i=0;i<=2;i++){
		cin>>b[i];
	}
	if(x==y){
		cout<<1;
		if(a[0]==b[0] && a[1]==b[1]){
			cout<<1;
			if(a[2]<'D'&&b[2]<'D') o=1;
			if(a[2]>'C'&&b[2]>'C') p=1;
			if(o||p){
				cout<<1;
			}
			else cout<<0;
		}
		else{
			cout<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0;
	}
	if(a[0]==b[0]&&a[1]==b[1]&&a[2]==b[2]){
		cout<<0;
		return 0;
	}
	if(o||p){
		if(a[2]-b[2]==1||b[2]-a[2]==1){
			cout<<1;
			return 1;
		}
		else{
			cout<<0;
			return 0;
		}
	}
	else{
		cout<<0;
		return 0;
	}
	return 0;
}
