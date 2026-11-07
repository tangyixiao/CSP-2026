#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string train1,seat1,train2,seat2;
	cin>>train1>>seat1>>train2>>seat2;
	if(train1[0]==train2[0]&&train2[1]==train1[1])cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(seat1[0]==seat2[0]&&seat2[1]==seat1[1]){
		cout<<1;
	}
	else{ cout<<0<<0<<0;
		return 0;
	}
	if(seat1[2]=='F'&&seat2[2]=='D'||seat2[2]=='F'&&seat1[2]=='D'){
		cout<<1<<1;
		return 0;
	}if(seat1[2]=='F'&&seat2[2]!='D'||seat2[2]=='F'&&seat1[2]!='D'||seat1[2]=='D'&&seat2[2]!='F'||seat2[2]=='D'&&seat1[2]!='F'){
		cout<<0<<0;
		return 0;
	}
	if(seat2[2]=='B'||seat1[2]=='B'){
		cout<<1<<1;
	}else{
		cout<<1<<0;
	}
	return 0;
}