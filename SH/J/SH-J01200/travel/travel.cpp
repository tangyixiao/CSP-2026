#include <bits/stdc++.h>
using namespace std;
using ll=long long;
string ra,rb,xa,xb;
bool flag=0;
bool flag1=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ra>>rb>>xa>>xb;
	//是否在一个车厢 
	if(ra==xa){
		cout<<1;
		flag=1;
	}
	else{
		cout<<0;
	}
	//是否在同一排 
	if(flag){
		if(rb[0]==xb[0]&&rb[1]==xb[1]){
			cout<<1;
			flag=1;
		}
		else{
			cout<<0;
			flag=0;
		}
	}
	else{
		cout<<0;
		flag=0;
	}
	//是否在一边 
	if(flag){
		if((rb[2]=='A'||rb[2]=='B'||rb[2]=='C')&&(xb[2]!='D'&&xb[2]!='F')){
			cout<<1;
			flag=1;
		}
		else if((rb[2]=='D'||rb[2]=='F')&&(xb[2]=='D'||xb[2]=='F')){
			cout<<1;
			flag=1;
			flag1=1;
		}
		else{
			cout<<0;
			flag=0;
		}
	}
	else{
		cout<<0;
		flag=0;
	}
	//是否相连
	if(flag){
		if(flag1){
			cout<<1;
		}
		else{
			if((int(rb[2])-int(xb[2])==1)||(int(xb[2])-int(rb[2])==1)){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
	}
	else{
		cout<<0;
	}
	return 0; 
}
