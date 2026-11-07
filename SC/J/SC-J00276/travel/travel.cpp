#include<bits/stdc++.h>
#define ll long long
using namespace std;
string c1,c2,d1,d2;
ll dman,dyjy;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=4;i++){
		string a;
		cin>>a;
		if(i==1){
			c1=a;
		}else if(i==2){
			d1=a;
		}else if(i==3){
			c2=a;
		}else{
			d2=a;
		}
	} 
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}else{//A=65
		cout<<1;
		if(d1[0]==d2[0]&&d1[1]==d2[1]){
			cout<<1;
			if(d1[2]=='D'){
				d1[2]='E';
			}
			if(d2[2]=='D'){
				d2[2]='E';
			}
			if(d1[2]=='A'||d1[2]=='B'||d1[2]=='C'){
				dman=1;
			}else{
				dman=2;
			}
			if(d2[2]=='A'||d2[2]=='B'||d2[2]=='C'){
				dyjy=1;
			}else{
				dyjy=2;
			}
			if(dman==dyjy){
				cout<<"1";
				if(abs(d1[2]-d2[2])==1){
					cout<<"1";
					return 0;
				}else{
					cout<<"0";
					return 0;
				}
				return 0;
			}else {
				cout<<"00";
				return 0;
			}
		}else{
			cout<<"000";
			return 0;
		}
	}
	return 0;
}