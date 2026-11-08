#include<bits/stdc++.h>
using namespace std;
bool q1=false,q2=false,q3=false,q4=false;
string b1,b2;
int a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1;
	cin>>a2>>b2;
	if(a1!=a2){
		cout<<"0000";
		return 0;
	}else{
		q1=true;
	}
	if(b1[0]==b2[0] and b1[1]==b2[1]){
		q2=true;
		if(b1[2]<='C' and b2[2]<='C'){
			q3=true;
		}else if(b1[2]>='D' and b2[2]>='D'){
			q3=true;
		}
		if(q3==true){
			if(abs(b1[2]-b2[2])==1){
				q4=true;
			}
		}
	}
	if(q1){
		cout<<'1';
	}else{
		cout<<'0';
	}
	if(q2){
		cout<<'1';
	}else{
		cout<<'0';
	}
	if(q3){
		cout<<'1';
	}else{
		cout<<'0';
	}
	if(q4){
		cout<<'1';
	}else{
		cout<<'0';
	}
	return 0;
}
