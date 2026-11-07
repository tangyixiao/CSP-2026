#include<bits/stdc++.h>
using namespace std;
int check(string x,string y){
	if(abs(x[2]-y[2])<=2 && x[2]<='C' && y[2]<='C'){
		return 1;
	}
	else if(abs(x[2]-y[2])==1 && (x[2]=='F' || y[2]=='F')){
		return 2;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		cout<<1;
		if(a2[0]==b2[0] && a2[1]==b2[1]){
			cout<<1;
			if(check(a2,b2)==1){
				cout<<1;
				if(abs(a2[2]-b2[2])==1){
					cout<<1;
				}
				else cout<<0;
			}
			else if(check(a2,b2)==2){
				for(int i=1;i<=2;i++){
					cout<<1;
				}
			}
			else{
				for(int i=1;i<=2;i++){
					cout<<0;
				}
			}
		}
		else{
			for(int i=1;i<=3;i++){
				cout<<0;
			}
		}
	}
	else{
		for(int i=1;i<=4;i++){
			cout<<0;
		}
	}
	return 0;
} 