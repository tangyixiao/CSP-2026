#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int x1,x2,p1=10000,p2=1000,p3=100,p4=10;
	string w1,w2;
	cin>>x1>>w1>>x2>>w2;	
	int t1=w1[0]-'0';
	int t12=w1[1]-'0';
	int t2=w2[0]-'0';
	int t22=w2[1]-'0';
	int t13=w1[2]-'A';
	int t23=w2[2]-'A';	
	if(t13==1||t13==2||t13==0){
		p1=1;
	}
	else {
		p3=0;
	}
	if(t23==1||t23==2||t23==0){
		p2=1;
	}
	else {
		p4=0;
	}
	if(x1!=x2){
		cout<<"0000";
	}
	else if(x1==x2){

		if(t1==t2&&t12==t22){
			if(p3==p4){
				cout<<"1111";
			}
			else if(p1==p2){
				if(t13-t23==1||t23-t13==1){
					cout<<"1111";
				}
				else{
					cout<<"1110";
				}
			}
			
			else{
				cout<<"1100";
			}
		}	
		else{
			cout<<"1000";
		}
	}
	return 0;
} 
