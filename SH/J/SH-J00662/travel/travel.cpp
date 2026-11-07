#include<bits/stdc++.h>
using namespace std;
void read_ticket(int&a,int&b,int&c1){
	cin>>a;
	char c;
	cin>>c;
	b=c-'0';
	cin>>c;
	b=b*10+c-'0';
	cin>>c;
	switch(c){
		case 'A':{
			c1=0;
			break;
		}
		case 'B':{
			c1=1;
			break;
		}
		case 'C':{
			c1=2;
			break;
		}
		case 'D':{
			c1=3;
			break;
		}
		case 'F':{
			c1=4;
			break;
		}
	}
}
int ok3[5][5]={
	{1,1,1,0,0},
	{1,1,1,0,0},
	{1,1,1,0,0},
	{0,0,0,1,1},
	{0,0,0,1,1}
};
int ok4[5][5]={
	{0,1,0,0,0},
	{1,0,1,0,0},
	{0,1,0,0,0},
	{0,0,0,0,1},
	{0,0,0,1,0}
};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int t1,t2,t3,p1,p2,p3;
	read_ticket(t1,t2,t3);
	read_ticket(p1,p2,p3);
	if(t1==p1){
		cout<<"1";
		if(t2==p2){
			cout<<"1";
			if(ok3[t3][p3]){
				cout<<"1";
				if(ok4[t3][p3]){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
