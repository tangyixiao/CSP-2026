#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	int ca,cc,ans=0;
	string cb,cd;
	cin>>ca>>cb>>cc>>cd;
	int b,c;
	if(cb[2]=='A'){
		b=1;
	}else if(cb[2]=='B'){
		b=2;
	}else if(cb[2]=='C'){
		b=3;
	}else if(cb[2]=='D'){
		b=4;
	}else if(cb[2]=='F'){
		b=5;
	}	
	if(cd[2]=='A'){
		c=1;
	}else if(cd[2]=='B'){
		c=2;
	}else if(cd[2]=='C'){
		c=3;
	}else if(cd[2]=='D'){
		c=4;
	}else if(cd[2]=='F'){
		c=5;
	}
	if(ca==cc){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	} 
	if(cb[0]==cd[0]&&cb[1]==cd[1]){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}if((b<=3&&c<=3)||(b>3&&c>3)){
		cout<<1;
	}else{
		cout<<0<<0;
		return 0;
	}if(b-c==1||c-b==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
