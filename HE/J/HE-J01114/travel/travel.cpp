#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int side,side2,int1,int2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){//判断同一节车厢 
		cout<<1;
		//R在哪一侧 
		if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C'){
			side=1;
		}else{
			side=2;
		}
		//X在哪一侧
		if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C'){
			side2=1;
		}else{
			side2=2;
		}
		//座位号（数字） 
		int1=(s1[0]-'0')*10+(s1[1]-'0');
		int2=(s2[0]-'0')*10+(s2[1]-'0');
		//---------------------------------------
		if(int1==int2){
			cout<<1;
			//判断同一侧 
			if(side==side2){
				cout<<1;
			}else{
				cout<<0;
			}
		}else{
			cout<<0;
			cout<<0;
		}
		//判断相邻
		if(side==side2){
		 	if(s1[2]==s2[2] && (int1-int2==1 || int1-int2==-1)){
		 		cout<<1;	
			}else if(int1 == int2 && !(s1[2]=='A' && s2[2]=='C') && !(s2[2]=='A' && s1[2]=='C')){
				cout<<1;
			}else{
				cout<<0;
			}
		}else{
		 	cout<<0;
		}
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}
