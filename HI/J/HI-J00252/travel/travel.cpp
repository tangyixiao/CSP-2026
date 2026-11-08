#include<bits/stdc++.h>
using namespace std;
string train_R,seat_R,train_X,seat_X;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	bool f=0;
	cin>>train_R>>seat_R>>train_X>>seat_X;
	if(train_R==train_X){
		cout<<1;
		f=1;
	}else{
		cout<<0;
		f=0;
	}
	
	if(f==0)cout<<0;
	else if(seat_R[0]==seat_X[0]&&seat_R[1]==seat_X[1]){
		cout<<1;
		f=1;
	}else{
		cout<<0;
		f=0;
	}
	
	
	char r=seat_R[2],x=seat_X[2];
	if(f==0)cout<<0;
	else if(!((r=='C'&&x=='D')||(r=='D'&&x=='C'))){
		cout<<1;
		f=1;
	}else{
		cout<<0;
		f=0;
	}
	
	
	if(f==0){
		cout<<0;
	}else{
		if(r==x-1||r==x+1){
			cout<<1;
		}else{
			cout<<0;
		}
	}
	
	return 0;
}
